#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1726336314U;
unsigned int var_3 = 2114608611U;
unsigned long long int var_6 = 9596212844156082885ULL;
long long int var_7 = 6879372653445310000LL;
unsigned int var_10 = 2047275933U;
int var_11 = -298757955;
_Bool var_12 = (_Bool)0;
unsigned short var_16 = (unsigned short)2284;
unsigned short var_17 = (unsigned short)30149;
unsigned long long int var_18 = 5358824657829119813ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8853396118904806281LL;
long long int var_21 = -7827205530685926553LL;
long long int var_22 = 2480969929845356196LL;
long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -7702547201563038223LL : 5548714157295333892LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
