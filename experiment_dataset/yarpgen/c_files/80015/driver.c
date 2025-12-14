#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3337982989U;
unsigned int var_4 = 910211533U;
unsigned int var_8 = 3744877838U;
unsigned int var_10 = 141924469U;
unsigned char var_16 = (unsigned char)208;
int zero = 0;
unsigned char var_20 = (unsigned char)37;
int var_21 = 819110702;
unsigned char var_22 = (unsigned char)46;
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
