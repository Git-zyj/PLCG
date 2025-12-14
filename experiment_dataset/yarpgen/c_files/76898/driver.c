#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1818862153U;
unsigned int var_3 = 726216377U;
unsigned int var_9 = 1518040044U;
unsigned int var_12 = 976039032U;
unsigned long long int var_13 = 1658140654984624851ULL;
unsigned long long int var_14 = 373494215147596429ULL;
int var_16 = 1621637750;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
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
