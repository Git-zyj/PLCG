#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)71;
unsigned char var_6 = (unsigned char)107;
unsigned short var_8 = (unsigned short)42845;
int var_9 = -1608929706;
int zero = 0;
unsigned short var_11 = (unsigned short)48598;
int var_12 = -1056188787;
unsigned short var_13 = (unsigned short)28603;
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
