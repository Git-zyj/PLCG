#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)178;
unsigned char var_5 = (unsigned char)158;
unsigned char var_8 = (unsigned char)99;
unsigned char var_16 = (unsigned char)60;
unsigned char var_19 = (unsigned char)237;
int zero = 0;
unsigned char var_20 = (unsigned char)116;
unsigned char var_21 = (unsigned char)47;
unsigned char var_22 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
