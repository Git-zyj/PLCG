#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1355085699;
unsigned long long int var_4 = 2028402234879255871ULL;
unsigned long long int var_8 = 4677738805276922476ULL;
int zero = 0;
unsigned int var_11 = 2689060790U;
signed char var_12 = (signed char)66;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
