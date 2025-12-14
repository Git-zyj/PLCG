#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20251;
unsigned short var_1 = (unsigned short)40251;
unsigned short var_2 = (unsigned short)1057;
unsigned short var_4 = (unsigned short)104;
short var_6 = (short)-13503;
short var_7 = (short)21925;
short var_8 = (short)-15035;
short var_10 = (short)-19522;
short var_13 = (short)-7397;
int zero = 0;
short var_14 = (short)-9821;
short var_15 = (short)-22996;
void init() {
}

void checksum() {
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
