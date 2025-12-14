#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-2239;
unsigned short var_14 = (unsigned short)35;
int zero = 0;
unsigned long long int var_16 = 11228777595619209545ULL;
unsigned int var_17 = 1276153073U;
unsigned short var_18 = (unsigned short)53698;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
