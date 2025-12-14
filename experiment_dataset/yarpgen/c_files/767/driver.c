#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 989503552U;
unsigned char var_3 = (unsigned char)63;
short var_4 = (short)-2471;
unsigned short var_6 = (unsigned short)33931;
short var_10 = (short)-26221;
unsigned short var_11 = (unsigned short)21984;
unsigned long long int var_12 = 2909925365198509029ULL;
int zero = 0;
signed char var_14 = (signed char)-108;
unsigned int var_15 = 1829090983U;
long long int var_16 = 7619027775939764600LL;
unsigned char var_17 = (unsigned char)22;
void init() {
}

void checksum() {
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
