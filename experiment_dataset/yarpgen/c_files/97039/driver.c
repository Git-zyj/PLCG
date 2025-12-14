#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-85;
int var_3 = -2146930054;
unsigned short var_10 = (unsigned short)48732;
int zero = 0;
unsigned long long int var_15 = 18388850040787864600ULL;
signed char var_16 = (signed char)44;
int var_17 = 369122869;
unsigned short var_18 = (unsigned short)45397;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
