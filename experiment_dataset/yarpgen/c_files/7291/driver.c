#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1635684345;
unsigned char var_6 = (unsigned char)2;
unsigned int var_8 = 1543874123U;
unsigned int var_9 = 3724395897U;
int var_12 = -293548161;
int zero = 0;
unsigned int var_13 = 2174694409U;
signed char var_14 = (signed char)-38;
long long int var_15 = -9153693889076081157LL;
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
