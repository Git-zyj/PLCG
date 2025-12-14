#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2694055004245797344LL;
unsigned char var_2 = (unsigned char)126;
unsigned short var_6 = (unsigned short)45634;
short var_7 = (short)31893;
unsigned long long int var_8 = 5755265489687484491ULL;
unsigned char var_9 = (unsigned char)17;
unsigned long long int var_10 = 994261951786906059ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)241;
int var_12 = -1621350861;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
