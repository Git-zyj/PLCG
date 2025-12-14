#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 3899597956U;
unsigned char var_7 = (unsigned char)155;
unsigned short var_8 = (unsigned short)25126;
int zero = 0;
unsigned char var_18 = (unsigned char)16;
short var_19 = (short)21187;
unsigned int var_20 = 1767374386U;
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
