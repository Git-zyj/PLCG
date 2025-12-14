#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18154;
unsigned short var_1 = (unsigned short)22769;
unsigned short var_2 = (unsigned short)21191;
short var_3 = (short)-11273;
unsigned short var_4 = (unsigned short)20330;
short var_5 = (short)21648;
short var_6 = (short)-25552;
unsigned long long int var_7 = 18185990942502179607ULL;
int var_8 = 142190449;
unsigned long long int var_9 = 15809248131177673624ULL;
unsigned char var_10 = (unsigned char)4;
int var_11 = -1137071458;
int zero = 0;
unsigned short var_12 = (unsigned short)24629;
int var_13 = -907109428;
short var_14 = (short)-3311;
unsigned short var_15 = (unsigned short)6843;
short var_16 = (short)25246;
unsigned short var_17 = (unsigned short)23765;
int arr_11 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 643721781 : -472238547;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
