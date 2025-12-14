#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)27761;
int var_9 = 1286245943;
unsigned short var_10 = (unsigned short)3519;
unsigned int var_16 = 702855751U;
int zero = 0;
signed char var_19 = (signed char)107;
signed char var_20 = (signed char)82;
unsigned char var_21 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
