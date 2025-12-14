#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
signed char var_1 = (signed char)127;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
short var_8 = (short)5395;
unsigned char var_10 = (unsigned char)177;
unsigned int var_12 = 353361885U;
int zero = 0;
int var_15 = 1485238648;
short var_16 = (short)16814;
short var_17 = (short)-19391;
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
