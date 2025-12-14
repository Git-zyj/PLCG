#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)216;
signed char var_4 = (signed char)-115;
unsigned char var_5 = (unsigned char)64;
unsigned short var_6 = (unsigned short)64711;
short var_8 = (short)-2796;
unsigned char var_10 = (unsigned char)194;
signed char var_11 = (signed char)40;
int zero = 0;
short var_13 = (short)2496;
signed char var_14 = (signed char)-31;
void init() {
}

void checksum() {
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
