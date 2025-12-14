#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19291;
short var_1 = (short)20545;
short var_2 = (short)-8728;
short var_5 = (short)-6533;
short var_6 = (short)-16761;
short var_10 = (short)17244;
int zero = 0;
short var_17 = (short)16563;
short var_18 = (short)27534;
short var_19 = (short)23175;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
