#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15660;
short var_2 = (short)-29560;
short var_3 = (short)-14658;
short var_4 = (short)10651;
short var_7 = (short)-29681;
short var_8 = (short)29248;
short var_10 = (short)-5815;
short var_11 = (short)5723;
int zero = 0;
short var_12 = (short)17361;
short var_13 = (short)-7519;
short var_14 = (short)-2128;
short var_15 = (short)-29107;
short var_16 = (short)1624;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
