#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)198;
unsigned short var_5 = (unsigned short)33757;
unsigned long long int var_8 = 3641774599912005498ULL;
short var_11 = (short)-19066;
unsigned short var_14 = (unsigned short)50917;
int zero = 0;
int var_15 = -558337580;
unsigned int var_16 = 4286210027U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
