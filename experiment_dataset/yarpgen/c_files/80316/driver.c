#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7946730339951194742ULL;
int var_3 = 60242380;
unsigned int var_5 = 2167622765U;
long long int var_6 = -1215886075909257558LL;
unsigned char var_7 = (unsigned char)160;
unsigned char var_15 = (unsigned char)73;
long long int var_19 = -3399078998598897433LL;
int zero = 0;
unsigned long long int var_20 = 11597546410311371514ULL;
long long int var_21 = -5048204900527100263LL;
void init() {
}

void checksum() {
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
