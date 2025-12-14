#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24060;
short var_2 = (short)-13954;
unsigned short var_5 = (unsigned short)42256;
short var_7 = (short)31531;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
short var_14 = (short)-3881;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-5275;
unsigned int var_17 = 1276633087U;
unsigned int var_18 = 3580094567U;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-9727;
unsigned short arr_0 [19] [19] ;
short arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)7554;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)3853;
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
