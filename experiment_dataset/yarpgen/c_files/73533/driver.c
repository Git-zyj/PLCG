#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 10428294483044273433ULL;
unsigned char var_10 = (unsigned char)81;
unsigned short var_13 = (unsigned short)18557;
unsigned char var_15 = (unsigned char)11;
int zero = 0;
short var_18 = (short)18409;
unsigned char var_19 = (unsigned char)95;
void init() {
}

void checksum() {
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
