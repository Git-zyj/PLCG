#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1108437223;
unsigned char var_4 = (unsigned char)29;
unsigned char var_14 = (unsigned char)148;
unsigned char var_17 = (unsigned char)19;
unsigned short var_18 = (unsigned short)20802;
int zero = 0;
unsigned long long int var_19 = 17439326035868630358ULL;
short var_20 = (short)-1637;
unsigned char var_21 = (unsigned char)226;
signed char var_22 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
