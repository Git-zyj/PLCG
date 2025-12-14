#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)204;
unsigned long long int var_10 = 1083872255234854037ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)60672;
unsigned long long int var_13 = 17729506825343491226ULL;
int var_14 = -92242504;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
