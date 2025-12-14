#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5767641792330220503LL;
unsigned char var_6 = (unsigned char)6;
short var_9 = (short)-8066;
int zero = 0;
unsigned short var_10 = (unsigned short)37883;
unsigned char var_11 = (unsigned char)62;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
