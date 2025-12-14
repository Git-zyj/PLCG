#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)23711;
short var_5 = (short)4849;
unsigned int var_6 = 3556368510U;
short var_9 = (short)17972;
long long int var_10 = -9172590127679252566LL;
int zero = 0;
signed char var_11 = (signed char)-1;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 673923427U;
unsigned char var_14 = (unsigned char)192;
unsigned short var_15 = (unsigned short)45433;
signed char var_16 = (signed char)-45;
unsigned short var_17 = (unsigned short)18783;
short arr_0 [19] ;
unsigned short arr_1 [19] ;
int arr_3 [19] ;
signed char arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-23695;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)14009;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1469591763 : 2040118045;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-51 : (signed char)56;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
