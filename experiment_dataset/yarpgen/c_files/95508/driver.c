#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1944653508;
_Bool var_5 = (_Bool)1;
short var_10 = (short)23613;
int var_11 = -374743478;
int zero = 0;
unsigned char var_15 = (unsigned char)36;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-10740;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
