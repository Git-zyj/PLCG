#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13657877905521661032ULL;
unsigned long long int var_7 = 17077869542629335553ULL;
unsigned char var_12 = (unsigned char)18;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_15 = -2057376973;
unsigned long long int var_16 = 17971135908749019394ULL;
unsigned char var_17 = (unsigned char)134;
unsigned char var_18 = (unsigned char)79;
unsigned char var_19 = (unsigned char)16;
_Bool arr_1 [25] [25] ;
short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)32044;
}

void checksum() {
    hash(&seed, var_15);
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
