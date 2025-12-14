#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10943;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)225;
unsigned long long int var_10 = 17613425888276632375ULL;
unsigned int var_13 = 3989051859U;
int var_15 = -1068225762;
int zero = 0;
signed char var_16 = (signed char)-62;
unsigned short var_17 = (unsigned short)56484;
unsigned char var_18 = (unsigned char)120;
long long int var_19 = -616401068390784279LL;
unsigned char var_20 = (unsigned char)158;
unsigned int var_21 = 1980988937U;
signed char var_22 = (signed char)50;
long long int arr_0 [12] ;
unsigned int arr_1 [12] [12] ;
int arr_2 [12] [12] ;
unsigned int arr_3 [12] [12] ;
_Bool arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -8389313037827062073LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 815654459U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = -361519940;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 2976378338U : 465182730U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
