#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)-84;
unsigned char var_13 = (unsigned char)224;
int zero = 0;
unsigned long long int var_19 = 13165505357930704782ULL;
unsigned short var_20 = (unsigned short)36061;
unsigned char var_21 = (unsigned char)204;
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
