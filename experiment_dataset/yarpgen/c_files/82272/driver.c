#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_3 = -2081726484;
short var_4 = (short)4169;
unsigned char var_5 = (unsigned char)76;
_Bool var_6 = (_Bool)0;
long long int var_7 = -8623580339995939727LL;
signed char var_9 = (signed char)-48;
int zero = 0;
unsigned long long int var_10 = 9640172563618004774ULL;
unsigned short var_11 = (unsigned short)43531;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)36006;
long long int var_14 = -6473877660279876711LL;
int var_15 = -1795565810;
long long int var_16 = -1970830409937951664LL;
_Bool arr_2 [15] ;
int arr_3 [15] [15] ;
long long int arr_4 [15] ;
unsigned long long int arr_6 [15] [15] [15] ;
short arr_8 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 1657638527;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 4850469134037098469LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 11569620767859136720ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-7544;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
