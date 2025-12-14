#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13867652596704790875ULL;
signed char var_3 = (signed char)72;
unsigned short var_6 = (unsigned short)12350;
long long int var_7 = 681229403466570746LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 121114877165666789ULL;
unsigned short var_16 = (unsigned short)4811;
unsigned short var_17 = (unsigned short)64646;
unsigned char var_18 = (unsigned char)254;
long long int var_19 = -4194230150524035770LL;
_Bool var_20 = (_Bool)0;
_Bool arr_0 [24] ;
short arr_1 [24] ;
unsigned long long int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-5331 : (short)-26944;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 12202655374038492238ULL : 4185593140073572748ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
