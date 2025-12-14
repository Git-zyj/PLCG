#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17738;
unsigned char var_4 = (unsigned char)13;
short var_5 = (short)5422;
int var_6 = -1429330941;
short var_7 = (short)23628;
int zero = 0;
short var_10 = (short)32616;
long long int var_11 = 2189503037165044918LL;
unsigned char var_12 = (unsigned char)245;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
