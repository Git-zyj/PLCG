#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15843;
unsigned int var_2 = 1159067463U;
short var_3 = (short)8397;
unsigned int var_6 = 1991131681U;
unsigned int var_9 = 1845604076U;
short var_11 = (short)19290;
int zero = 0;
short var_12 = (short)-20852;
short var_13 = (short)6198;
short var_14 = (short)-19569;
unsigned int var_15 = 1095012162U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
