#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
unsigned int var_3 = 1660429445U;
unsigned short var_7 = (unsigned short)27375;
int var_8 = -2130833655;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 436143871U;
int zero = 0;
unsigned int var_16 = 1829095005U;
unsigned char var_17 = (unsigned char)215;
long long int var_18 = 1468132414442562393LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
