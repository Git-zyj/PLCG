#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17470;
int var_3 = -1359077654;
long long int var_4 = 8207393073787771461LL;
short var_12 = (short)30479;
short var_13 = (short)-1519;
int zero = 0;
short var_14 = (short)-14606;
unsigned char var_15 = (unsigned char)162;
int var_16 = 172075965;
unsigned short var_17 = (unsigned short)10175;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
