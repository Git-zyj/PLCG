#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 491794460U;
unsigned int var_1 = 1510759916U;
unsigned int var_3 = 3479231495U;
unsigned int var_4 = 989878883U;
unsigned int var_6 = 1956102800U;
unsigned int var_8 = 2907464083U;
unsigned int var_9 = 3373894867U;
int zero = 0;
unsigned int var_11 = 3560489634U;
unsigned int var_12 = 2939444202U;
unsigned int var_13 = 743970890U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
