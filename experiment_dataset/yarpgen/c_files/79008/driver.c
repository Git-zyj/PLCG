#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
signed char var_1 = (signed char)-19;
signed char var_2 = (signed char)71;
signed char var_3 = (signed char)97;
int zero = 0;
signed char var_15 = (signed char)-92;
signed char var_16 = (signed char)91;
int var_17 = 42848087;
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
