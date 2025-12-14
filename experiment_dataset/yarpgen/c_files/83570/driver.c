#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10351159468715699145ULL;
unsigned long long int var_6 = 11013632588798193687ULL;
int var_10 = 1283606477;
long long int var_11 = -3752588500925627425LL;
int zero = 0;
unsigned int var_12 = 1574644099U;
int var_13 = -1973850003;
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
