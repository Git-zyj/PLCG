#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1828341977;
unsigned char var_10 = (unsigned char)170;
unsigned char var_15 = (unsigned char)96;
int zero = 0;
short var_17 = (short)7235;
int var_18 = -1579061318;
unsigned int var_19 = 4275059315U;
unsigned int var_20 = 1773273813U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
