#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56152;
unsigned int var_9 = 628831930U;
signed char var_10 = (signed char)60;
int var_11 = 1197036401;
long long int var_12 = 1160469104628303508LL;
int zero = 0;
signed char var_15 = (signed char)-30;
unsigned long long int var_16 = 15616518725929467837ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
