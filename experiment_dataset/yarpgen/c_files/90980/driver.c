#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19717;
short var_1 = (short)-15673;
unsigned short var_2 = (unsigned short)44879;
unsigned long long int var_3 = 6752878543494070852ULL;
short var_5 = (short)-8364;
unsigned long long int var_6 = 10493280542186376302ULL;
signed char var_7 = (signed char)101;
unsigned char var_8 = (unsigned char)7;
int zero = 0;
short var_10 = (short)20285;
unsigned char var_11 = (unsigned char)159;
short var_12 = (short)23202;
short var_13 = (short)13779;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
