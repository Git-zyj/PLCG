#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3360758174U;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-10500;
unsigned char var_6 = (unsigned char)158;
unsigned short var_7 = (unsigned short)29689;
short var_8 = (short)30651;
int zero = 0;
unsigned short var_10 = (unsigned short)35171;
unsigned long long int var_11 = 11866567406479016788ULL;
short var_12 = (short)-2854;
signed char var_13 = (signed char)-43;
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
