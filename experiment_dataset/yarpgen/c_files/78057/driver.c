#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)2;
long long int var_8 = 5196579010971915143LL;
unsigned char var_11 = (unsigned char)165;
unsigned char var_12 = (unsigned char)101;
short var_13 = (short)-5185;
unsigned short var_14 = (unsigned short)47409;
int zero = 0;
unsigned char var_16 = (unsigned char)38;
long long int var_17 = -5189751254393808930LL;
long long int var_18 = -2881289554404097461LL;
int arr_2 [22] ;
long long int arr_3 [22] ;
short arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 972133963;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 2603906706904221343LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)19485;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
