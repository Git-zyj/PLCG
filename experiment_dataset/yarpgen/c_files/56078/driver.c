#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
unsigned char var_5 = (unsigned char)73;
long long int var_7 = 1127233590342072787LL;
unsigned char var_11 = (unsigned char)182;
int zero = 0;
short var_16 = (short)-7387;
unsigned short var_17 = (unsigned short)57960;
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
