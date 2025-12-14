#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 223731604U;
unsigned long long int var_16 = 5325237199315069385ULL;
unsigned int var_17 = 224386665U;
int zero = 0;
unsigned long long int var_18 = 2244550208855136685ULL;
unsigned long long int var_19 = 8328967317214524259ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
