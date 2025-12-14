#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)54;
unsigned char var_7 = (unsigned char)21;
unsigned char var_8 = (unsigned char)190;
int zero = 0;
signed char var_14 = (signed char)-8;
signed char var_15 = (signed char)-124;
signed char var_16 = (signed char)-42;
signed char var_17 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
