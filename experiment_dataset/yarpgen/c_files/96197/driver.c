#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_6 = -1131500473;
unsigned char var_7 = (unsigned char)34;
short var_10 = (short)-32222;
signed char var_12 = (signed char)62;
int zero = 0;
long long int var_14 = -3580633298780546027LL;
long long int var_15 = -522897909690282206LL;
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
