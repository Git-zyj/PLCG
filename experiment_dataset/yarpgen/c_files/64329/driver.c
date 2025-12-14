#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6986488632987024809ULL;
int var_4 = -517692636;
long long int var_8 = -4777815350620645097LL;
short var_10 = (short)18006;
unsigned long long int var_12 = 9149311958253921704ULL;
short var_13 = (short)18012;
int zero = 0;
int var_16 = -236924350;
unsigned short var_17 = (unsigned short)24598;
short var_18 = (short)20811;
_Bool var_19 = (_Bool)1;
unsigned short arr_0 [13] [13] ;
unsigned short arr_1 [13] ;
unsigned short arr_2 [13] ;
unsigned long long int arr_3 [13] [13] ;
long long int arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)50796 : (unsigned short)23430;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58448 : (unsigned short)55419;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59531 : (unsigned short)47699;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 7543714801115927140ULL : 4661986952115551951ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 4030249839856268357LL : -3290854861813446991LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
