#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-25787;
unsigned char var_12 = (unsigned char)33;
short var_15 = (short)26874;
unsigned char var_18 = (unsigned char)218;
int zero = 0;
short var_19 = (short)-23818;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)244;
void init() {
}

void checksum() {
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
