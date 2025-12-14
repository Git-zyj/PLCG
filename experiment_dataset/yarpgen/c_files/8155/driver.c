#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -197024297023602034LL;
unsigned short var_1 = (unsigned short)42484;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1895661002U;
unsigned long long int var_11 = 2118481453868562350ULL;
int zero = 0;
int var_12 = -1025592523;
unsigned short var_13 = (unsigned short)31983;
short var_14 = (short)21045;
unsigned char var_15 = (unsigned char)31;
short var_16 = (short)-11115;
_Bool var_17 = (_Bool)0;
_Bool arr_3 [12] ;
unsigned short arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)18999 : (unsigned short)27065;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
