#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)15931;
long long int var_11 = -705500239421790392LL;
unsigned long long int var_12 = 17651046578375601585ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)22232;
short var_17 = (short)2342;
unsigned long long int var_18 = 8557189245975752447ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
