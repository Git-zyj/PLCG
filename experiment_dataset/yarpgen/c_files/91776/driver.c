#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 635900055U;
unsigned int var_9 = 1738520823U;
unsigned int var_10 = 4165021459U;
unsigned int var_15 = 946143534U;
int zero = 0;
unsigned int var_17 = 4197917003U;
unsigned int var_18 = 2108204660U;
unsigned int var_19 = 3371141258U;
unsigned int var_20 = 2776306197U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
