#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2596617705U;
unsigned int var_9 = 3988795735U;
_Bool var_10 = (_Bool)0;
int var_15 = -706920109;
int var_17 = -1920365478;
int zero = 0;
unsigned int var_19 = 489943956U;
unsigned int var_20 = 3729746051U;
void init() {
}

void checksum() {
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
