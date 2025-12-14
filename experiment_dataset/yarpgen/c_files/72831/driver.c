#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -977201857;
unsigned int var_5 = 561830388U;
unsigned char var_6 = (unsigned char)247;
long long int var_7 = -2424067987949300780LL;
unsigned char var_13 = (unsigned char)152;
unsigned short var_15 = (unsigned short)20169;
int zero = 0;
int var_20 = -1521691596;
signed char var_21 = (signed char)-50;
unsigned short var_22 = (unsigned short)35115;
unsigned short var_23 = (unsigned short)42614;
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
