#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
signed char var_5 = (signed char)48;
long long int var_6 = 113883852549465847LL;
long long int var_7 = -6744768144404950026LL;
signed char var_10 = (signed char)-62;
short var_11 = (short)22066;
int zero = 0;
unsigned int var_12 = 1991755216U;
int var_13 = 2038468097;
int var_14 = -1233904718;
short var_15 = (short)-15930;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 6331013306369496416ULL;
unsigned int var_18 = 4204454747U;
signed char arr_0 [14] ;
unsigned int arr_1 [14] [14] ;
long long int arr_4 [14] ;
_Bool arr_12 [20] [20] ;
int arr_5 [14] ;
unsigned short arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 1366522893U : 3718098951U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3622176879780242118LL : -3226096978249509659LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1656192761 : -707596775;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)1934 : (unsigned short)19528;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
