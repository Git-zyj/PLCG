#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2781504682U;
int var_3 = 1605171488;
int var_7 = 595563047;
signed char var_9 = (signed char)-78;
int zero = 0;
unsigned long long int var_17 = 16501555676983467135ULL;
long long int var_18 = 3584233227817292194LL;
void init() {
}

void checksum() {
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
