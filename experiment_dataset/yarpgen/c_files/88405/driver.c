#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
signed char var_3 = (signed char)-39;
unsigned short var_4 = (unsigned short)42030;
unsigned char var_5 = (unsigned char)69;
long long int var_12 = -7486952887838781456LL;
signed char var_15 = (signed char)42;
int zero = 0;
unsigned char var_18 = (unsigned char)6;
int var_19 = -1673383323;
unsigned char var_20 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
