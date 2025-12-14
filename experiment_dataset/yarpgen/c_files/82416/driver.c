#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)54;
unsigned int var_1 = 3941457023U;
unsigned short var_2 = (unsigned short)24787;
short var_3 = (short)1170;
_Bool var_4 = (_Bool)0;
short var_5 = (short)14688;
short var_6 = (short)-18510;
unsigned int var_7 = 1069351009U;
unsigned int var_8 = 1642447251U;
unsigned int var_9 = 2525431427U;
unsigned long long int var_10 = 13623867238600817610ULL;
unsigned long long int var_11 = 7140906841886760438ULL;
int zero = 0;
signed char var_12 = (signed char)46;
short var_13 = (short)-30878;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-26269;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 11114751389611341311ULL;
unsigned int var_18 = 3816724918U;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)33;
unsigned char var_21 = (unsigned char)29;
short var_22 = (short)4065;
_Bool var_23 = (_Bool)0;
unsigned int arr_13 [18] ;
unsigned long long int arr_14 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = 1292745546U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = 4808053147954628137ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
