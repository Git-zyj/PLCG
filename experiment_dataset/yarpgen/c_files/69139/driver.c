#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)210;
unsigned short var_2 = (unsigned short)18227;
unsigned int var_3 = 1581871067U;
long long int var_5 = -2971630171453321903LL;
short var_6 = (short)13824;
unsigned char var_7 = (unsigned char)25;
long long int var_10 = 6924619825699688230LL;
int zero = 0;
unsigned short var_11 = (unsigned short)36734;
unsigned short var_12 = (unsigned short)42491;
unsigned short var_13 = (unsigned short)2751;
signed char var_14 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
