#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-47;
signed char var_3 = (signed char)-96;
short var_7 = (short)10743;
short var_8 = (short)-14715;
unsigned short var_9 = (unsigned short)879;
unsigned short var_12 = (unsigned short)797;
int zero = 0;
unsigned int var_14 = 3523441012U;
short var_15 = (short)-22668;
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
