#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39417;
int var_2 = -1200307797;
short var_6 = (short)29722;
unsigned int var_7 = 1242437405U;
signed char var_14 = (signed char)67;
int zero = 0;
signed char var_16 = (signed char)7;
signed char var_17 = (signed char)30;
unsigned short var_18 = (unsigned short)50021;
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
