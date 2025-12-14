#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3273377460U;
unsigned int var_3 = 1702165832U;
unsigned char var_4 = (unsigned char)74;
short var_6 = (short)-3661;
unsigned char var_7 = (unsigned char)114;
short var_8 = (short)30009;
short var_13 = (short)24849;
int var_14 = 1916076907;
int zero = 0;
unsigned char var_15 = (unsigned char)246;
unsigned int var_16 = 172436681U;
unsigned char var_17 = (unsigned char)61;
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
