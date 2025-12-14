#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)117;
short var_4 = (short)5100;
short var_5 = (short)-15230;
short var_8 = (short)30748;
unsigned short var_10 = (unsigned short)39544;
int zero = 0;
unsigned short var_13 = (unsigned short)9484;
unsigned short var_14 = (unsigned short)40093;
short var_15 = (short)1232;
short var_16 = (short)-32687;
unsigned long long int var_17 = 9903125751887674107ULL;
unsigned short var_18 = (unsigned short)33801;
unsigned short var_19 = (unsigned short)26778;
unsigned long long int var_20 = 7118978547973774908ULL;
unsigned short arr_0 [18] [18] ;
unsigned short arr_1 [18] ;
short arr_2 [18] ;
signed char arr_3 [18] [18] ;
short arr_6 [18] ;
unsigned short arr_7 [18] [18] ;
unsigned long long int arr_4 [18] ;
unsigned short arr_8 [18] ;
unsigned short arr_9 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)53595 : (unsigned short)58333;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)13768;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)6069;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (short)-21882;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)29218 : (unsigned short)43843;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 9031184979131588989ULL : 297529653559014612ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)47041 : (unsigned short)56167;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)52482 : (unsigned short)32228;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
