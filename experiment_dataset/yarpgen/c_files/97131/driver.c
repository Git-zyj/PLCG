#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1494;
unsigned long long int var_5 = 13656542182043884147ULL;
short var_8 = (short)-11237;
unsigned int var_9 = 2415831304U;
short var_14 = (short)-18789;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_18 = 1727310291;
long long int var_19 = -6099955168324697504LL;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)46718;
_Bool arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
