#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)178;
short var_6 = (short)-14589;
unsigned short var_7 = (unsigned short)58338;
unsigned short var_14 = (unsigned short)34927;
unsigned char var_18 = (unsigned char)135;
int zero = 0;
short var_20 = (short)12972;
unsigned int var_21 = 2727942217U;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-24;
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
