#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 10985396754775188853ULL;
unsigned int var_8 = 2110006721U;
unsigned char var_12 = (unsigned char)245;
unsigned char var_13 = (unsigned char)94;
unsigned short var_15 = (unsigned short)9854;
int zero = 0;
unsigned int var_18 = 1232562608U;
unsigned long long int var_19 = 3072226414023909381ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
