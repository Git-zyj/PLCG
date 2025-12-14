#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -7306743622894794133LL;
unsigned long long int var_11 = 3365128049917801538ULL;
unsigned long long int var_14 = 6809109964611731186ULL;
int zero = 0;
unsigned long long int var_15 = 12538359692064958175ULL;
unsigned char var_16 = (unsigned char)229;
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
