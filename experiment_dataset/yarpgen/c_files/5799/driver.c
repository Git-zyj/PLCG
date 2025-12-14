#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)3035;
signed char var_6 = (signed char)45;
unsigned short var_8 = (unsigned short)21511;
int zero = 0;
short var_10 = (short)1007;
unsigned short var_11 = (unsigned short)20480;
short var_12 = (short)-9263;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
