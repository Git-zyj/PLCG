#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15583440081238256805ULL;
long long int var_4 = 8877595555347727317LL;
signed char var_8 = (signed char)-116;
int var_9 = 982766349;
int zero = 0;
signed char var_10 = (signed char)-30;
unsigned int var_11 = 881365393U;
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
