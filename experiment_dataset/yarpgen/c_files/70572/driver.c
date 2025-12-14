#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17005;
short var_4 = (short)-21243;
short var_7 = (short)-10042;
short var_12 = (short)22502;
short var_13 = (short)-19159;
int zero = 0;
short var_15 = (short)10625;
short var_16 = (short)-223;
short var_17 = (short)-17949;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
