#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
int var_2 = 1693614403;
int var_6 = 826115068;
int zero = 0;
int var_12 = 1853720044;
unsigned long long int var_13 = 2460611238299607323ULL;
unsigned long long int var_14 = 10811651476463713221ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
