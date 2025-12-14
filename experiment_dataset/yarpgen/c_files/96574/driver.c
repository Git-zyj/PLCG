#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)25426;
int var_4 = -10204065;
int var_6 = -334044575;
unsigned long long int var_7 = 12399355777205881010ULL;
short var_9 = (short)-10500;
int zero = 0;
unsigned char var_10 = (unsigned char)21;
unsigned int var_11 = 4245844309U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
