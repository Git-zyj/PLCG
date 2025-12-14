#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7587;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
short var_10 = (short)-25479;
short var_12 = (short)-7636;
int zero = 0;
unsigned short var_14 = (unsigned short)62650;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 3500064670881688725ULL;
short var_17 = (short)-21866;
int arr_2 [25] ;
unsigned long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 2082702255;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 5428589001930902098ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
