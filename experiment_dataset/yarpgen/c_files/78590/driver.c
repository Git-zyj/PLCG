#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48645;
unsigned int var_11 = 1050051973U;
unsigned int var_16 = 4283616299U;
int zero = 0;
unsigned short var_19 = (unsigned short)46680;
unsigned short var_20 = (unsigned short)21552;
unsigned long long int var_21 = 2015324729280048310ULL;
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
