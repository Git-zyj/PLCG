#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12733588542790051064ULL;
unsigned long long int var_3 = 9514743536913945047ULL;
unsigned long long int var_5 = 13066429623392976014ULL;
unsigned char var_8 = (unsigned char)131;
long long int var_10 = -7436684949228336915LL;
int zero = 0;
int var_16 = 1404912438;
long long int var_17 = -351547497282994479LL;
unsigned char var_18 = (unsigned char)41;
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
