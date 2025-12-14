#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1379719543;
unsigned long long int var_5 = 4798445867312920955ULL;
int zero = 0;
unsigned long long int var_14 = 13955438664087144063ULL;
unsigned char var_15 = (unsigned char)87;
unsigned long long int var_16 = 15622947677998251215ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
