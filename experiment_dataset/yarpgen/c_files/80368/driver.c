#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)232;
long long int var_9 = -7591944125934295832LL;
unsigned long long int var_10 = 4946327759101366395ULL;
unsigned char var_11 = (unsigned char)55;
int zero = 0;
long long int var_13 = 5305270353190544625LL;
short var_14 = (short)-88;
void init() {
}

void checksum() {
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
