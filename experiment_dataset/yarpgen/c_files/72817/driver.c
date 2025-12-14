#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)203;
unsigned char var_5 = (unsigned char)56;
int zero = 0;
short var_14 = (short)27081;
signed char var_15 = (signed char)12;
unsigned int var_16 = 3083228709U;
int var_17 = -1573577924;
long long int var_18 = -4754589096924813386LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
