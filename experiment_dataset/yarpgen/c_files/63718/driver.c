#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11627380118899031130ULL;
long long int var_3 = -6000341631695058341LL;
unsigned short var_4 = (unsigned short)16393;
short var_6 = (short)-8740;
short var_11 = (short)298;
short var_12 = (short)-19433;
unsigned char var_14 = (unsigned char)179;
short var_18 = (short)5505;
int zero = 0;
unsigned long long int var_20 = 14911689504274549784ULL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -8223749032832323262LL;
unsigned char var_23 = (unsigned char)80;
unsigned long long int var_24 = 17342685902490832897ULL;
unsigned short var_25 = (unsigned short)63134;
unsigned int var_26 = 2771462774U;
short arr_0 [18] ;
_Bool arr_1 [18] [18] ;
short arr_2 [18] [18] [18] ;
unsigned long long int arr_6 [11] ;
_Bool arr_7 [11] [11] ;
unsigned int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-19923;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)11207 : (short)-28272;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 7835780629665905595ULL : 1023753301067865776ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1941390127U : 3741907873U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
