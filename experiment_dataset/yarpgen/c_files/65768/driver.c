#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)92;
unsigned char var_5 = (unsigned char)50;
short var_6 = (short)-10417;
unsigned char var_9 = (unsigned char)186;
unsigned char var_11 = (unsigned char)248;
int zero = 0;
unsigned char var_13 = (unsigned char)58;
unsigned int var_14 = 2327054369U;
short var_15 = (short)-40;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
