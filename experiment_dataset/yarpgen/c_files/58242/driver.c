#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)45;
short var_1 = (short)4689;
unsigned char var_5 = (unsigned char)129;
unsigned int var_8 = 2310780716U;
unsigned char var_9 = (unsigned char)48;
short var_14 = (short)16592;
unsigned long long int var_15 = 11929912679792462411ULL;
int zero = 0;
signed char var_17 = (signed char)27;
unsigned short var_18 = (unsigned short)7555;
void init() {
}

void checksum() {
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
