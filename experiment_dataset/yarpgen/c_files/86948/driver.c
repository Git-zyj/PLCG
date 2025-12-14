#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14219;
long long int var_1 = 613029541061635042LL;
unsigned char var_2 = (unsigned char)130;
unsigned short var_3 = (unsigned short)19799;
unsigned short var_4 = (unsigned short)44398;
signed char var_7 = (signed char)19;
unsigned char var_8 = (unsigned char)118;
unsigned short var_9 = (unsigned short)10682;
signed char var_10 = (signed char)76;
unsigned char var_11 = (unsigned char)164;
unsigned char var_12 = (unsigned char)31;
short var_13 = (short)10101;
int zero = 0;
unsigned short var_14 = (unsigned short)3534;
short var_15 = (short)-507;
unsigned char var_16 = (unsigned char)149;
unsigned char var_17 = (unsigned char)216;
unsigned char var_18 = (unsigned char)251;
signed char var_19 = (signed char)1;
unsigned short var_20 = (unsigned short)1912;
unsigned char var_21 = (unsigned char)245;
unsigned short var_22 = (unsigned short)57778;
unsigned char var_23 = (unsigned char)6;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)0;
int arr_17 [25] [25] [25] [25] [25] ;
short arr_18 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -970768730 : 1246916920;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (short)-26389;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
