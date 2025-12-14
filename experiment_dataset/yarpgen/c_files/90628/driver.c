#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3127283587U;
unsigned int var_5 = 868052139U;
unsigned int var_6 = 3134023750U;
unsigned int var_7 = 964139148U;
unsigned int var_8 = 519934132U;
unsigned int var_10 = 3633173674U;
unsigned int var_11 = 1645544850U;
int zero = 0;
unsigned int var_12 = 733281330U;
unsigned int var_13 = 2478289921U;
unsigned int var_14 = 1489437435U;
unsigned int var_15 = 3287429273U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
