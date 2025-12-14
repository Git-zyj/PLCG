#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1154816583309075690LL;
unsigned int var_4 = 2715551010U;
unsigned short var_7 = (unsigned short)37929;
unsigned short var_10 = (unsigned short)29252;
int zero = 0;
signed char var_11 = (signed char)-25;
unsigned int var_12 = 2881141908U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
