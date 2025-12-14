#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6797588677673490232LL;
long long int var_7 = -2303743398785773367LL;
long long int var_12 = 3602326742517108135LL;
long long int var_14 = -7514515637897949070LL;
int zero = 0;
long long int var_16 = -8437020463646408102LL;
long long int var_17 = -4738209521166418405LL;
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
