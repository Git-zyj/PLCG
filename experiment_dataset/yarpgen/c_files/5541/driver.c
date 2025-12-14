#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned char var_11 = (unsigned char)189;
short var_13 = (short)10332;
int zero = 0;
signed char var_14 = (signed char)27;
unsigned long long int var_15 = 13934055601073791143ULL;
unsigned short var_16 = (unsigned short)12861;
unsigned char var_17 = (unsigned char)210;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
