#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)94;
int var_12 = -1076161275;
short var_13 = (short)21153;
long long int var_15 = -5309651333668709377LL;
int zero = 0;
short var_16 = (short)-30256;
unsigned char var_17 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
