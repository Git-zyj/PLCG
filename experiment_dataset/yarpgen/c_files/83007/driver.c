#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53808;
unsigned short var_2 = (unsigned short)12605;
unsigned short var_3 = (unsigned short)37200;
unsigned short var_6 = (unsigned short)55397;
unsigned short var_12 = (unsigned short)57983;
unsigned short var_13 = (unsigned short)49532;
unsigned short var_16 = (unsigned short)5934;
int zero = 0;
unsigned short var_17 = (unsigned short)51342;
unsigned short var_18 = (unsigned short)33930;
unsigned short var_19 = (unsigned short)19822;
unsigned short var_20 = (unsigned short)46291;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
