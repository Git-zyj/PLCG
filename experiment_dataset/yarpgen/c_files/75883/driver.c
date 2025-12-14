#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1311050116;
long long int var_2 = -3528611983368568500LL;
long long int var_4 = -7239479935071538965LL;
unsigned int var_10 = 544827585U;
unsigned int var_11 = 3771528547U;
short var_12 = (short)8550;
short var_13 = (short)917;
int zero = 0;
signed char var_15 = (signed char)51;
unsigned int var_16 = 2023072542U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
