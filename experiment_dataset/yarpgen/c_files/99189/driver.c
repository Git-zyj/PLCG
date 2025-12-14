#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
short var_1 = (short)-9651;
unsigned char var_3 = (unsigned char)167;
short var_5 = (short)628;
unsigned char var_7 = (unsigned char)201;
short var_9 = (short)-22831;
unsigned char var_10 = (unsigned char)160;
int zero = 0;
short var_12 = (short)-14540;
short var_13 = (short)-14743;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
