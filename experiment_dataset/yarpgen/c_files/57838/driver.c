#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13156;
unsigned char var_11 = (unsigned char)24;
unsigned int var_15 = 939545835U;
int zero = 0;
unsigned char var_20 = (unsigned char)177;
_Bool var_21 = (_Bool)0;
short var_22 = (short)19409;
short var_23 = (short)26244;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
