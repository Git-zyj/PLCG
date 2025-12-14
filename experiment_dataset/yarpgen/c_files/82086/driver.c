#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29573;
_Bool var_2 = (_Bool)1;
unsigned int var_9 = 1144364991U;
unsigned char var_12 = (unsigned char)2;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -6015508557813916340LL;
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
