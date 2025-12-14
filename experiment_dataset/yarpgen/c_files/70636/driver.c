#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -185423122;
unsigned short var_4 = (unsigned short)10722;
long long int var_5 = 1862455142270281805LL;
short var_6 = (short)-21240;
unsigned long long int var_9 = 17809903742339997685ULL;
short var_10 = (short)26075;
int var_11 = -1587621403;
unsigned char var_12 = (unsigned char)33;
short var_14 = (short)-7776;
unsigned long long int var_15 = 1785150864205116887ULL;
int zero = 0;
int var_16 = -1553998725;
short var_17 = (short)-26034;
long long int var_18 = 3899237635687666295LL;
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
