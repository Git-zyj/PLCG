#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6606163768325848734LL;
long long int var_14 = -3949958902702242472LL;
int zero = 0;
long long int var_18 = 1627281194038318881LL;
long long int var_19 = -2021288007327688243LL;
long long int var_20 = 4377633228416960470LL;
void init() {
}

void checksum() {
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
