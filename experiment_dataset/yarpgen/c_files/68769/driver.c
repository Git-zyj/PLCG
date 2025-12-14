#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8288;
unsigned short var_1 = (unsigned short)52573;
unsigned long long int var_4 = 15898450656590286872ULL;
unsigned short var_5 = (unsigned short)27713;
short var_6 = (short)-28716;
int zero = 0;
unsigned short var_16 = (unsigned short)53025;
unsigned long long int var_17 = 3777192623064889199ULL;
void init() {
}

void checksum() {
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
