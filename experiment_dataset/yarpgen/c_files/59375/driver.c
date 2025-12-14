#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4013392655U;
long long int var_5 = -2527198367930168904LL;
signed char var_6 = (signed char)103;
unsigned short var_8 = (unsigned short)7724;
int var_12 = -1172774588;
int zero = 0;
unsigned char var_14 = (unsigned char)215;
_Bool var_15 = (_Bool)0;
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
