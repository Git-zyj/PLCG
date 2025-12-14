#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13338;
unsigned int var_5 = 1016511499U;
unsigned long long int var_7 = 11060778106012657291ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)49346;
unsigned short var_11 = (unsigned short)60033;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
