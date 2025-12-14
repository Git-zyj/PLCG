#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29396;
int var_7 = -463390993;
long long int var_9 = 6304914501697453247LL;
unsigned int var_10 = 3368106250U;
int zero = 0;
unsigned char var_11 = (unsigned char)242;
signed char var_12 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
