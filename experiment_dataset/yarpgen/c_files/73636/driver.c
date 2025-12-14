#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4291121293U;
unsigned int var_2 = 3888173134U;
unsigned int var_6 = 979692327U;
unsigned short var_7 = (unsigned short)30838;
unsigned long long int var_9 = 5282478188821474416ULL;
int zero = 0;
unsigned int var_13 = 1618743511U;
unsigned int var_14 = 3719747367U;
unsigned long long int var_15 = 10660646563634446721ULL;
unsigned long long int var_16 = 17997899473883284259ULL;
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
