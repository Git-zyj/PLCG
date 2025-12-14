#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1197515273;
unsigned int var_2 = 2900808210U;
long long int var_12 = -141308395162710125LL;
unsigned short var_15 = (unsigned short)19973;
int zero = 0;
unsigned short var_16 = (unsigned short)61250;
long long int var_17 = -131447877378514036LL;
short var_18 = (short)21620;
unsigned char var_19 = (unsigned char)29;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
