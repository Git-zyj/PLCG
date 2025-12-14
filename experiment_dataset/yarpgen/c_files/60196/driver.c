#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -733361694;
short var_4 = (short)19825;
int var_7 = -1904454025;
short var_9 = (short)-8289;
int zero = 0;
int var_13 = -1146224747;
int var_14 = -1450744575;
unsigned char var_15 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
