#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7769053178816312807ULL;
short var_5 = (short)-14501;
unsigned long long int var_7 = 15154428585268967531ULL;
short var_9 = (short)10350;
short var_10 = (short)17870;
short var_11 = (short)-6994;
int zero = 0;
short var_12 = (short)10345;
long long int var_13 = -1490126761440303725LL;
long long int var_14 = -4515301445125005507LL;
void init() {
}

void checksum() {
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
