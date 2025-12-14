#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5282;
short var_2 = (short)-4967;
int var_3 = 1838895821;
int var_4 = 2024151824;
unsigned long long int var_5 = 12118992162572519221ULL;
unsigned int var_6 = 2709581289U;
int zero = 0;
unsigned char var_10 = (unsigned char)66;
short var_11 = (short)-14607;
unsigned short var_12 = (unsigned short)21234;
short var_13 = (short)28638;
int var_14 = -1036815026;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
