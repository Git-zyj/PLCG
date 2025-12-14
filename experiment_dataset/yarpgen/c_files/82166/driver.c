#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1167554537;
unsigned int var_8 = 4239254987U;
unsigned char var_9 = (unsigned char)175;
unsigned long long int var_10 = 11539087715422386850ULL;
_Bool var_11 = (_Bool)0;
unsigned short var_15 = (unsigned short)8212;
int zero = 0;
int var_18 = 2132038727;
int var_19 = 63261136;
short var_20 = (short)-4934;
unsigned char var_21 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
