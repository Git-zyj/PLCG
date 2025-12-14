#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24811;
unsigned long long int var_1 = 11689400597066157938ULL;
int var_2 = -1977200835;
unsigned short var_3 = (unsigned short)9693;
short var_5 = (short)-2961;
unsigned long long int var_7 = 1816921808740181514ULL;
unsigned short var_8 = (unsigned short)1013;
unsigned short var_10 = (unsigned short)13563;
int zero = 0;
long long int var_11 = 4884193419587700484LL;
int var_12 = -78925574;
unsigned char var_13 = (unsigned char)77;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
