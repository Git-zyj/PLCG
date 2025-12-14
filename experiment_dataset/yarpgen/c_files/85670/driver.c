#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-20276;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned int var_15 = 4202052099U;
int zero = 0;
signed char var_16 = (signed char)32;
short var_17 = (short)16811;
int var_18 = 484057471;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
