#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37870;
int var_3 = -1509643239;
unsigned int var_7 = 4144096167U;
unsigned char var_9 = (unsigned char)22;
unsigned char var_11 = (unsigned char)191;
int zero = 0;
int var_20 = -1080754405;
unsigned short var_21 = (unsigned short)328;
unsigned short var_22 = (unsigned short)11265;
long long int var_23 = -8057312009238857832LL;
short var_24 = (short)30065;
unsigned char var_25 = (unsigned char)3;
unsigned char var_26 = (unsigned char)47;
signed char var_27 = (signed char)-7;
unsigned short arr_0 [13] ;
long long int arr_1 [13] [13] ;
unsigned long long int arr_4 [24] [24] ;
unsigned short arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)54842;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -6218713907251236750LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 2024941703182322279ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)37506;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
