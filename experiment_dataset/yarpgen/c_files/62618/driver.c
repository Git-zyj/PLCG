#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29869;
unsigned char var_4 = (unsigned char)74;
signed char var_5 = (signed char)14;
signed char var_14 = (signed char)54;
unsigned char var_16 = (unsigned char)107;
int zero = 0;
short var_18 = (short)-22584;
unsigned long long int var_19 = 14471792366502147287ULL;
int var_20 = 1885654060;
short var_21 = (short)-18762;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
