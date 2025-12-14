#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3782686676U;
signed char var_6 = (signed char)37;
signed char var_7 = (signed char)85;
unsigned int var_10 = 3677183942U;
int zero = 0;
unsigned int var_12 = 1074172269U;
int var_13 = 76744704;
short var_14 = (short)-25813;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
