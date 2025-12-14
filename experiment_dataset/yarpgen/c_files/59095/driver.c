#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 4449387703210732418ULL;
_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int var_16 = 188048009;
int zero = 0;
unsigned char var_19 = (unsigned char)9;
unsigned long long int var_20 = 8119831650148998423ULL;
short var_21 = (short)16008;
unsigned long long int var_22 = 648381049472199038ULL;
unsigned char var_23 = (unsigned char)88;
_Bool var_24 = (_Bool)0;
_Bool arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
