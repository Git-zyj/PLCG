#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -13378018;
short var_3 = (short)9789;
unsigned char var_7 = (unsigned char)245;
signed char var_9 = (signed char)-91;
short var_16 = (short)-14927;
int zero = 0;
unsigned char var_18 = (unsigned char)227;
unsigned short var_19 = (unsigned short)2665;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
