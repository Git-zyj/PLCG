#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24417;
unsigned char var_5 = (unsigned char)129;
unsigned char var_10 = (unsigned char)122;
unsigned char var_12 = (unsigned char)5;
unsigned short var_13 = (unsigned short)9790;
short var_14 = (short)-12182;
unsigned short var_15 = (unsigned short)11342;
int zero = 0;
unsigned int var_16 = 3265808160U;
unsigned short var_17 = (unsigned short)50442;
_Bool var_18 = (_Bool)1;
int var_19 = -1924431612;
long long int var_20 = -3475359630505447898LL;
short var_21 = (short)165;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)2129;
_Bool var_25 = (_Bool)1;
int arr_1 [18] ;
unsigned short arr_6 [20] ;
signed char arr_10 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -368999951;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned short)56229;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)59;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
