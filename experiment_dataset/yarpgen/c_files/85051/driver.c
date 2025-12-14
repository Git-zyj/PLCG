#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1892722929;
unsigned char var_3 = (unsigned char)233;
int zero = 0;
unsigned char var_11 = (unsigned char)231;
signed char var_12 = (signed char)31;
unsigned int var_13 = 2191251841U;
unsigned char var_14 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
