#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1719328972U;
short var_4 = (short)26817;
signed char var_5 = (signed char)0;
unsigned long long int var_6 = 8757972888408921428ULL;
unsigned char var_8 = (unsigned char)191;
long long int var_10 = 1073325835564446116LL;
unsigned short var_12 = (unsigned short)57219;
signed char var_13 = (signed char)-42;
unsigned char var_16 = (unsigned char)214;
unsigned int var_17 = 178623006U;
int zero = 0;
signed char var_19 = (signed char)53;
unsigned char var_20 = (unsigned char)57;
unsigned int var_21 = 2010354966U;
short var_22 = (short)-19448;
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
