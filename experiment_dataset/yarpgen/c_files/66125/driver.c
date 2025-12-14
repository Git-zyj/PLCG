#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2566491513U;
unsigned int var_2 = 1750502511U;
unsigned int var_3 = 389649229U;
unsigned long long int var_8 = 10056192147500093394ULL;
unsigned long long int var_9 = 4076634428611777214ULL;
unsigned long long int var_11 = 3329544292989500321ULL;
unsigned long long int var_13 = 10149900695004938077ULL;
int zero = 0;
unsigned long long int var_16 = 15866496524508692406ULL;
unsigned long long int var_17 = 13532916692492187596ULL;
unsigned long long int var_18 = 10836085693689953411ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
