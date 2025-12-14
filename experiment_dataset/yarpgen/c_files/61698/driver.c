#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)95;
long long int var_7 = 7831094336310895991LL;
unsigned long long int var_8 = 3389026952689215757ULL;
unsigned long long int var_9 = 7338875248229315477ULL;
unsigned short var_10 = (unsigned short)65161;
unsigned short var_12 = (unsigned short)45006;
unsigned long long int var_14 = 7286359025076473674ULL;
unsigned long long int var_16 = 5918503349782247909ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)36503;
long long int var_19 = 4746434999296376213LL;
unsigned short var_20 = (unsigned short)15314;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
