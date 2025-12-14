#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2471;
unsigned long long int var_2 = 7521007890303685788ULL;
unsigned char var_5 = (unsigned char)51;
long long int var_6 = 3974819950874232242LL;
signed char var_9 = (signed char)-96;
unsigned int var_11 = 2639553394U;
int zero = 0;
short var_18 = (short)21069;
short var_19 = (short)19512;
unsigned short var_20 = (unsigned short)55744;
short var_21 = (short)-5852;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
