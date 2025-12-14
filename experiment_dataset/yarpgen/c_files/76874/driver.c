#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_13 = 1455702238;
signed char var_14 = (signed char)-99;
int zero = 0;
int var_16 = 576819870;
long long int var_17 = -4605097904180146997LL;
unsigned long long int var_18 = 5075230953260063673ULL;
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
