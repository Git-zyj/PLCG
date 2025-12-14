#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
short var_1 = (short)578;
int var_6 = 2050674055;
signed char var_8 = (signed char)-127;
unsigned short var_10 = (unsigned short)20611;
int zero = 0;
short var_11 = (short)-116;
signed char var_12 = (signed char)-76;
int var_13 = 390718963;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
