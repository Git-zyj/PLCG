#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 9030847505034491685LL;
unsigned short var_2 = (unsigned short)42891;
short var_4 = (short)13533;
unsigned char var_5 = (unsigned char)94;
int var_9 = -444693826;
unsigned char var_10 = (unsigned char)192;
int zero = 0;
unsigned long long int var_12 = 1415496203671850214ULL;
unsigned char var_13 = (unsigned char)212;
unsigned int var_14 = 3024314110U;
long long int var_15 = -6820811894319809794LL;
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
