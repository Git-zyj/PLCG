#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)63080;
int var_7 = 64744709;
int var_12 = 1361540050;
unsigned short var_13 = (unsigned short)37161;
int var_14 = -1732149256;
int var_15 = 656520239;
unsigned short var_16 = (unsigned short)52621;
int var_17 = -1551944610;
int zero = 0;
int var_18 = 77660453;
int var_19 = -1701424109;
int var_20 = 1555393967;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
