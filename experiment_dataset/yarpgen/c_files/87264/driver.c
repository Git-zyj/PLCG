#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 15251122180822058546ULL;
unsigned char var_12 = (unsigned char)37;
int zero = 0;
unsigned long long int var_13 = 14452559880337102498ULL;
short var_14 = (short)24778;
unsigned int var_15 = 708524098U;
int var_16 = -1976026363;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
