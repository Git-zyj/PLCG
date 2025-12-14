#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1907992711;
unsigned short var_12 = (unsigned short)64194;
unsigned int var_14 = 1395819872U;
int zero = 0;
unsigned char var_15 = (unsigned char)39;
unsigned int var_16 = 1995268670U;
int var_17 = 417303935;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
