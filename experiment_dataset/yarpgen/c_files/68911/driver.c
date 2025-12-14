#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63022;
unsigned int var_2 = 1570466967U;
unsigned char var_3 = (unsigned char)185;
short var_4 = (short)-1250;
signed char var_6 = (signed char)-64;
short var_7 = (short)1478;
signed char var_11 = (signed char)-50;
signed char var_13 = (signed char)18;
signed char var_14 = (signed char)-18;
short var_15 = (short)15893;
int zero = 0;
signed char var_19 = (signed char)-1;
signed char var_20 = (signed char)61;
signed char var_21 = (signed char)-117;
signed char var_22 = (signed char)-79;
long long int var_23 = -1948973323975566025LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
