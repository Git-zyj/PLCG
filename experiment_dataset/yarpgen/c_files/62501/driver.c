#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
int var_3 = 1252576915;
unsigned long long int var_6 = 10435061182207666509ULL;
int zero = 0;
unsigned int var_12 = 3291881171U;
unsigned short var_13 = (unsigned short)10313;
int var_14 = -1131396297;
int var_15 = 1890222730;
unsigned long long int var_16 = 2537536245856631377ULL;
unsigned char var_17 = (unsigned char)120;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
