#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1608877589U;
unsigned int var_3 = 1385079593U;
unsigned int var_6 = 364126284U;
unsigned int var_8 = 2367913423U;
unsigned int var_11 = 796726721U;
int zero = 0;
unsigned int var_13 = 1294941975U;
unsigned int var_14 = 2232658258U;
unsigned int var_15 = 3727761553U;
unsigned int var_16 = 3058242261U;
unsigned int var_17 = 453129857U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
