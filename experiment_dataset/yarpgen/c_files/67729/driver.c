#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18074;
unsigned int var_2 = 4251033550U;
int var_5 = 198587636;
unsigned long long int var_12 = 14135660121465818550ULL;
int var_15 = -1854046037;
unsigned long long int var_16 = 4221815375183740373ULL;
int zero = 0;
unsigned long long int var_17 = 17706395979951617977ULL;
long long int var_18 = 8491994830511016966LL;
unsigned int var_19 = 745476527U;
unsigned int var_20 = 1507039753U;
_Bool var_21 = (_Bool)0;
long long int arr_0 [11] ;
int arr_1 [11] ;
unsigned short arr_2 [11] ;
unsigned short arr_3 [11] [11] ;
long long int arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 7235311019111272090LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1535721902 : -471513608;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)56601;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)39143;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 7245019851743962101LL : 3929365391158260658LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
