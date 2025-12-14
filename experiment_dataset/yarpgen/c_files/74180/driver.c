#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -693483778446590941LL;
int zero = 0;
unsigned char var_11 = (unsigned char)96;
int var_12 = 1176420541;
unsigned char var_13 = (unsigned char)9;
unsigned int var_14 = 3198342935U;
short var_15 = (short)3393;
unsigned short var_16 = (unsigned short)49964;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
