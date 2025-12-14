#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63847;
unsigned short var_1 = (unsigned short)22996;
signed char var_2 = (signed char)-109;
unsigned char var_5 = (unsigned char)187;
unsigned char var_6 = (unsigned char)238;
long long int var_7 = 1539028739585885373LL;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)110;
unsigned long long int var_11 = 10300862704627908473ULL;
unsigned int var_13 = 1509728685U;
int zero = 0;
short var_15 = (short)10695;
long long int var_16 = -2043578268965650921LL;
signed char var_17 = (signed char)120;
long long int var_18 = 4173460439581777855LL;
signed char var_19 = (signed char)54;
unsigned short var_20 = (unsigned short)2973;
long long int var_21 = -3371592336091867222LL;
short var_22 = (short)-7824;
short arr_2 [22] [22] ;
unsigned short arr_5 [10] ;
long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (short)17268;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)20184;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -7235042494238707246LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
