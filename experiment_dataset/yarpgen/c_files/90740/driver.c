#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)22271;
unsigned long long int var_8 = 10454867162514102437ULL;
int var_9 = 1773601053;
int zero = 0;
long long int var_10 = 4516851322812411088LL;
int var_11 = -600137348;
long long int var_12 = -3240799581777955452LL;
long long int var_13 = 7271362289083220091LL;
long long int var_14 = -1040990367113123829LL;
unsigned long long int var_15 = 13980790162935397198ULL;
long long int var_16 = -8374836188459561847LL;
int var_17 = -380595994;
short var_18 = (short)-6069;
int arr_8 [20] ;
long long int arr_10 [20] ;
unsigned int arr_12 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = -214796947;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = -3473949766330552636LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = 2322468888U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
