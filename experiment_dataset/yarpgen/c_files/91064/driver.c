#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9105378120584495959ULL;
unsigned char var_8 = (unsigned char)252;
long long int var_10 = 3712712558944936202LL;
unsigned short var_13 = (unsigned short)9134;
int zero = 0;
long long int var_15 = 3356266077435190451LL;
unsigned int var_16 = 1011581525U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
