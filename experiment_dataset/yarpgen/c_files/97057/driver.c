#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35125;
signed char var_1 = (signed char)104;
unsigned short var_2 = (unsigned short)37186;
int var_3 = 1914772360;
signed char var_4 = (signed char)100;
int var_5 = 62066831;
unsigned short var_6 = (unsigned short)47791;
unsigned int var_7 = 2972803316U;
int var_8 = -157656770;
int var_9 = 574254997;
unsigned short var_10 = (unsigned short)24478;
unsigned char var_11 = (unsigned char)194;
unsigned long long int var_12 = 2769999440502321670ULL;
unsigned char var_13 = (unsigned char)175;
int zero = 0;
int var_14 = -1410792830;
unsigned char var_15 = (unsigned char)91;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3670064482U;
unsigned int var_18 = 3928921225U;
_Bool var_19 = (_Bool)0;
_Bool arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
