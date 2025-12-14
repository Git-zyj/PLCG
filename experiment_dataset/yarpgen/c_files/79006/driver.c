#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)162;
unsigned long long int var_4 = 14562586024063517378ULL;
long long int var_6 = 4129901879648310820LL;
short var_7 = (short)-22872;
unsigned short var_9 = (unsigned short)13073;
unsigned short var_10 = (unsigned short)489;
unsigned int var_11 = 3034176807U;
int zero = 0;
int var_13 = 1952823253;
short var_14 = (short)-32747;
unsigned char var_15 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
