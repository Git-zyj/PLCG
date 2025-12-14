#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)56329;
short var_8 = (short)-18613;
unsigned short var_10 = (unsigned short)62110;
int zero = 0;
unsigned long long int var_14 = 15639655592741947261ULL;
unsigned long long int var_15 = 16948023152530481848ULL;
int var_16 = 1321091926;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
