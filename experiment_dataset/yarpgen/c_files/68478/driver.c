#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_15 = 8853714000793506358LL;
long long int var_17 = -4843941637484617547LL;
long long int var_18 = -8966156557424946702LL;
int zero = 0;
long long int var_19 = 896618424612117211LL;
long long int var_20 = -9024204806720275236LL;
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
