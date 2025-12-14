#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-19175;
int zero = 0;
int var_10 = 1324271610;
long long int var_11 = 1870659995883758147LL;
long long int var_12 = -1339438422530415180LL;
unsigned short var_13 = (unsigned short)1596;
long long int var_14 = -7227430364777020640LL;
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
