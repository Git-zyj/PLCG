#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
unsigned short var_2 = (unsigned short)63138;
long long int var_3 = -601664589155038182LL;
unsigned short var_4 = (unsigned short)24034;
unsigned char var_5 = (unsigned char)23;
unsigned long long int var_6 = 51765981645864545ULL;
long long int var_9 = 2505871616767949003LL;
unsigned long long int var_11 = 15671630944856368545ULL;
int zero = 0;
int var_12 = 326806603;
unsigned short var_13 = (unsigned short)26488;
long long int var_14 = 8952092555777755085LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
