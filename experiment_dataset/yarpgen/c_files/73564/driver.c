#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2301659295U;
unsigned long long int var_8 = 9025465398173109224ULL;
signed char var_9 = (signed char)8;
unsigned int var_11 = 1965678112U;
unsigned char var_15 = (unsigned char)230;
int zero = 0;
unsigned short var_19 = (unsigned short)61395;
unsigned char var_20 = (unsigned char)109;
int var_21 = -379259006;
void init() {
}

void checksum() {
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
