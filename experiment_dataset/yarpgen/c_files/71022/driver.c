#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2393419636U;
unsigned short var_4 = (unsigned short)5561;
unsigned short var_7 = (unsigned short)658;
long long int var_8 = -5966090372054218992LL;
unsigned int var_9 = 2919809230U;
unsigned short var_11 = (unsigned short)29234;
int zero = 0;
short var_16 = (short)23260;
unsigned char var_17 = (unsigned char)234;
unsigned char var_18 = (unsigned char)131;
unsigned short var_19 = (unsigned short)2276;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
