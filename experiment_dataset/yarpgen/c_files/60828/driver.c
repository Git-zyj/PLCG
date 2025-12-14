#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)17553;
unsigned long long int var_12 = 211515850184881861ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)38;
long long int var_16 = 8984090753082651142LL;
unsigned long long int var_17 = 18076204656966971157ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
