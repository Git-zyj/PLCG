#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1786757563191671805LL;
short var_7 = (short)-30559;
unsigned short var_15 = (unsigned short)35990;
unsigned char var_16 = (unsigned char)94;
int zero = 0;
unsigned char var_20 = (unsigned char)253;
int var_21 = -607441882;
short var_22 = (short)-32040;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
