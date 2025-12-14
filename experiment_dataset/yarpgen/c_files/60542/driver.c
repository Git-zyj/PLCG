#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3684046799U;
unsigned char var_5 = (unsigned char)197;
unsigned short var_7 = (unsigned short)395;
int zero = 0;
signed char var_11 = (signed char)-123;
signed char var_12 = (signed char)-91;
int var_13 = 525589977;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
