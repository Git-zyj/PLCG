#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 8039921593770816943LL;
unsigned char var_8 = (unsigned char)232;
int zero = 0;
unsigned char var_12 = (unsigned char)241;
unsigned int var_13 = 3713446553U;
signed char var_14 = (signed char)-51;
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
