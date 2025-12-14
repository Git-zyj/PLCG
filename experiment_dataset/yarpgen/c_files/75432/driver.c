#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8155254363827119067LL;
long long int var_3 = -7415088467879468988LL;
int var_9 = 18604901;
unsigned short var_11 = (unsigned short)48535;
unsigned long long int var_16 = 7516457299335601409ULL;
int zero = 0;
int var_17 = -38083622;
signed char var_18 = (signed char)96;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
