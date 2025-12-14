#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7330699209230593627LL;
long long int var_7 = 4118136546039218116LL;
long long int var_8 = 2356597249948110437LL;
int zero = 0;
long long int var_12 = -2106050135587094188LL;
long long int var_13 = 2793411785839834625LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
