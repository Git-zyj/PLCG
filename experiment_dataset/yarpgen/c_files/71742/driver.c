#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)135;
unsigned int var_6 = 1893728279U;
unsigned short var_8 = (unsigned short)56230;
int zero = 0;
signed char var_10 = (signed char)77;
signed char var_11 = (signed char)42;
int var_12 = 641084425;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
