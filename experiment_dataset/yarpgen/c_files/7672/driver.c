#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5919;
unsigned short var_1 = (unsigned short)52308;
signed char var_2 = (signed char)107;
int var_3 = 1453219937;
unsigned long long int var_10 = 990883339255509353ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)3679;
unsigned short var_13 = (unsigned short)41545;
short var_14 = (short)-11671;
unsigned short var_15 = (unsigned short)51585;
_Bool var_16 = (_Bool)1;
int var_17 = 617469216;
short var_18 = (short)7998;
unsigned short var_19 = (unsigned short)63069;
signed char var_20 = (signed char)-112;
long long int var_21 = -6259595311346959823LL;
short var_22 = (short)11689;
unsigned char var_23 = (unsigned char)10;
unsigned char arr_0 [21] [21] ;
_Bool arr_4 [25] ;
unsigned long long int arr_5 [25] [25] ;
unsigned char arr_2 [21] ;
int arr_12 [18] ;
short arr_17 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 2661475585401562695ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = -449388888;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (short)-2242;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
