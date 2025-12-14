#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 14986752409236344554ULL;
unsigned char var_10 = (unsigned char)65;
unsigned char var_11 = (unsigned char)144;
short var_16 = (short)7253;
short var_18 = (short)7172;
int zero = 0;
unsigned long long int var_19 = 15986839325415614702ULL;
unsigned long long int var_20 = 14146293887681873482ULL;
void init() {
}

void checksum() {
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
