#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3661232303U;
signed char var_9 = (signed char)110;
unsigned char var_13 = (unsigned char)200;
int zero = 0;
unsigned long long int var_15 = 6592251867128714171ULL;
unsigned int var_16 = 705241600U;
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
