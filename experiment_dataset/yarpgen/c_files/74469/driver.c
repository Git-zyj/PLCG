#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5023833254988494806LL;
signed char var_2 = (signed char)95;
short var_4 = (short)-22619;
unsigned int var_5 = 501110989U;
signed char var_10 = (signed char)48;
int var_12 = 691029344;
short var_13 = (short)25064;
signed char var_14 = (signed char)47;
int zero = 0;
unsigned int var_15 = 2137802961U;
unsigned int var_16 = 4061327218U;
unsigned short var_17 = (unsigned short)5786;
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
