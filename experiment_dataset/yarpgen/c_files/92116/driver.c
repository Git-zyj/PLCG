#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7301565692402027267LL;
long long int var_10 = 1624474940923673416LL;
short var_11 = (short)-14437;
int zero = 0;
unsigned char var_12 = (unsigned char)127;
unsigned char var_13 = (unsigned char)165;
unsigned long long int var_14 = 5477912393046095431ULL;
unsigned int var_15 = 778300950U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
