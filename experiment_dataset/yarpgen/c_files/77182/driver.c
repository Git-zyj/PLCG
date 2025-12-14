#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1251109823U;
unsigned int var_1 = 4251204774U;
unsigned long long int var_3 = 7269771907241442223ULL;
unsigned int var_15 = 1696048897U;
int zero = 0;
int var_19 = 1559884778;
int var_20 = -895936846;
unsigned long long int var_21 = 2428605552130400746ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
