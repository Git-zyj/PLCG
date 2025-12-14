#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)80;
_Bool var_8 = (_Bool)1;
unsigned short var_15 = (unsigned short)61678;
signed char var_18 = (signed char)2;
int zero = 0;
signed char var_20 = (signed char)56;
short var_21 = (short)-29373;
void init() {
}

void checksum() {
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
