#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)90;
unsigned char var_12 = (unsigned char)215;
unsigned long long int var_14 = 6378079111672931239ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)37305;
unsigned long long int var_17 = 6267245158354557266ULL;
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
