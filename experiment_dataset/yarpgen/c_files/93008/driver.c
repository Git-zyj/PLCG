#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)91;
unsigned short var_10 = (unsigned short)62964;
unsigned char var_12 = (unsigned char)223;
int var_17 = 594058310;
int zero = 0;
long long int var_20 = -7775609943096971608LL;
unsigned int var_21 = 2384598244U;
long long int var_22 = -6280062791937744914LL;
long long int var_23 = 1184035221352094775LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
