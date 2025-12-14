#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
int var_5 = 447261139;
signed char var_7 = (signed char)119;
unsigned long long int var_9 = 6454137438202041676ULL;
int zero = 0;
long long int var_13 = 7111919616255233371LL;
unsigned long long int var_14 = 8583351287343251634ULL;
unsigned long long int var_15 = 11421892721502054624ULL;
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
