#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8613720078226987199LL;
unsigned int var_7 = 891983215U;
int var_9 = -2136482405;
int var_11 = 1345224529;
int zero = 0;
unsigned int var_15 = 3135301122U;
short var_16 = (short)16823;
void init() {
}

void checksum() {
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
