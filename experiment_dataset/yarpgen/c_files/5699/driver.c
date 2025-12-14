#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)72;
_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)212;
unsigned long long int var_7 = 14889285658596632057ULL;
long long int var_10 = -8407523201428347685LL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-76;
unsigned long long int var_14 = 16901063491301613116ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)64744;
unsigned long long int var_17 = 17930359213932002063ULL;
unsigned long long int var_18 = 15296662086180278771ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 7111414962791621219ULL;
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
