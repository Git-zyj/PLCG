#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -890322619;
unsigned int var_4 = 4293809845U;
int var_8 = 1789031314;
long long int var_11 = 2060193978703261989LL;
int zero = 0;
unsigned short var_12 = (unsigned short)5642;
int var_13 = 1070017683;
short var_14 = (short)-25233;
unsigned short var_15 = (unsigned short)11522;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
