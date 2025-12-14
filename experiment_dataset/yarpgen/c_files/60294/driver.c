#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8252068365700671774ULL;
unsigned int var_10 = 1192546885U;
unsigned char var_14 = (unsigned char)140;
int zero = 0;
unsigned long long int var_16 = 5487254487438685210ULL;
unsigned long long int var_17 = 2616175582628708232ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
