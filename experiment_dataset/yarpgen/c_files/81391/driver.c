#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6696733900245635021LL;
int var_1 = -231332966;
signed char var_9 = (signed char)-8;
unsigned short var_14 = (unsigned short)57052;
int zero = 0;
int var_15 = -1105925350;
long long int var_16 = -2663980238028645234LL;
void init() {
}

void checksum() {
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
