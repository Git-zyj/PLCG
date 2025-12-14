#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 2761721938064417305ULL;
long long int var_11 = 3626947357129362147LL;
int zero = 0;
unsigned long long int var_12 = 1709067590184029413ULL;
unsigned long long int var_13 = 8638827751520908390ULL;
void init() {
}

void checksum() {
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
