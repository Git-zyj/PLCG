#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)19;
unsigned char var_2 = (unsigned char)136;
signed char var_5 = (signed char)13;
signed char var_8 = (signed char)40;
signed char var_10 = (signed char)-59;
long long int var_12 = 8488276310950955406LL;
int zero = 0;
int var_16 = 360160025;
unsigned int var_17 = 828547260U;
short var_18 = (short)-7871;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
