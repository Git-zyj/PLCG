#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -9011475516011330338LL;
unsigned int var_10 = 2722782866U;
int zero = 0;
unsigned long long int var_14 = 14684851179778153359ULL;
unsigned int var_15 = 1691352353U;
long long int var_16 = 1153881758126524962LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
