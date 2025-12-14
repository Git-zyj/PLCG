#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1561738190U;
int var_8 = 2000897168;
int var_10 = -468071162;
unsigned int var_14 = 4058543733U;
unsigned int var_16 = 2934455827U;
int zero = 0;
unsigned int var_17 = 606346601U;
int var_18 = -1073231325;
void init() {
}

void checksum() {
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
