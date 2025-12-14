#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1312815905;
unsigned short var_3 = (unsigned short)6578;
short var_5 = (short)19112;
signed char var_6 = (signed char)32;
int var_8 = -1155600289;
unsigned char var_10 = (unsigned char)42;
short var_11 = (short)-5762;
signed char var_12 = (signed char)90;
int zero = 0;
short var_14 = (short)4565;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
