#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7442;
signed char var_1 = (signed char)87;
unsigned long long int var_2 = 326567879551145296ULL;
unsigned long long int var_3 = 17342588660418155684ULL;
signed char var_5 = (signed char)41;
short var_7 = (short)-31579;
unsigned long long int var_9 = 1555410344539986733ULL;
int var_15 = -1024135020;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)25176;
unsigned int var_18 = 881991724U;
short var_19 = (short)32;
void init() {
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
