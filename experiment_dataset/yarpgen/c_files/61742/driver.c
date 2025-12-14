#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4285;
unsigned char var_2 = (unsigned char)6;
long long int var_4 = 7627662211664710316LL;
int var_6 = 1546996065;
long long int var_9 = 2876574089549843825LL;
long long int var_10 = -4212725383494126468LL;
unsigned int var_18 = 2435879632U;
int zero = 0;
long long int var_20 = -1000911161535894501LL;
long long int var_21 = 4488265215421024172LL;
unsigned int var_22 = 2084979124U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
