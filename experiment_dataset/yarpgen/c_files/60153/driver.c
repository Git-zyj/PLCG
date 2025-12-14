#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 17521624004047405122ULL;
unsigned long long int var_16 = 2113176028512707664ULL;
int zero = 0;
unsigned long long int var_20 = 1285900087566138018ULL;
unsigned short var_21 = (unsigned short)27490;
long long int var_22 = -3219773583959926179LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
