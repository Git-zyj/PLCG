#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2029480817;
int var_5 = 2016412223;
int var_6 = 1347034232;
int var_7 = -2041513365;
int var_8 = -406777196;
int var_13 = -26567903;
int var_14 = 1305656787;
int var_15 = 1666533261;
int zero = 0;
int var_16 = 1002682701;
int var_17 = -1709328347;
void init() {
}

void checksum() {
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
