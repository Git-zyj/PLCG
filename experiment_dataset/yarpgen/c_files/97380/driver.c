#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 833790633U;
unsigned char var_7 = (unsigned char)22;
unsigned int var_12 = 3688983977U;
unsigned short var_15 = (unsigned short)44394;
int zero = 0;
unsigned char var_16 = (unsigned char)239;
signed char var_17 = (signed char)124;
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
