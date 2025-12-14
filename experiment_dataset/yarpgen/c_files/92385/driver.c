#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)58964;
_Bool var_5 = (_Bool)1;
unsigned int var_14 = 3377264602U;
unsigned char var_16 = (unsigned char)123;
signed char var_18 = (signed char)63;
int zero = 0;
short var_20 = (short)13328;
signed char var_21 = (signed char)-96;
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
