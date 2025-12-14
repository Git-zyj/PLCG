#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)151;
signed char var_7 = (signed char)73;
unsigned char var_9 = (unsigned char)74;
_Bool var_14 = (_Bool)0;
signed char var_16 = (signed char)43;
unsigned short var_19 = (unsigned short)40711;
int zero = 0;
unsigned char var_20 = (unsigned char)192;
unsigned char var_21 = (unsigned char)171;
unsigned int var_22 = 491881877U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
