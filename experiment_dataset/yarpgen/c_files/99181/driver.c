#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10024;
unsigned char var_3 = (unsigned char)138;
unsigned short var_5 = (unsigned short)48101;
unsigned long long int var_7 = 11433957667030300898ULL;
unsigned int var_10 = 2637178127U;
int var_11 = 2084157586;
int var_13 = 103554781;
int var_14 = -515593745;
int zero = 0;
int var_15 = -1782846494;
int var_16 = 59861677;
unsigned long long int var_17 = 14764198445632177112ULL;
unsigned long long int var_18 = 7808122521696827763ULL;
unsigned long long int var_19 = 16928105910652368857ULL;
short var_20 = (short)-7315;
unsigned long long int arr_0 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 9875686794929545018ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
