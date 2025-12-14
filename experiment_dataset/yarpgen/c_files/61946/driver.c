#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)225;
unsigned short var_1 = (unsigned short)65010;
long long int var_2 = -4972124714235687439LL;
signed char var_3 = (signed char)-99;
unsigned short var_4 = (unsigned short)57847;
unsigned short var_5 = (unsigned short)24577;
unsigned short var_6 = (unsigned short)30941;
signed char var_7 = (signed char)96;
int var_8 = 1671959427;
signed char var_10 = (signed char)55;
unsigned char var_11 = (unsigned char)234;
int zero = 0;
signed char var_12 = (signed char)46;
long long int var_13 = 4404741893964076247LL;
unsigned int var_14 = 2154234436U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
