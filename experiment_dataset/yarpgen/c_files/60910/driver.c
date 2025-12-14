#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 14490847133761846004ULL;
int var_14 = -165745616;
long long int var_15 = 175068822817116646LL;
long long int var_17 = 8298415947885567589LL;
int zero = 0;
int var_19 = 2072528759;
long long int var_20 = 643636346494261625LL;
void init() {
}

void checksum() {
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
