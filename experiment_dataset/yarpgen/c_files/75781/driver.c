#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 515067312U;
unsigned char var_1 = (unsigned char)179;
short var_2 = (short)-5496;
short var_7 = (short)29442;
int var_8 = -844149251;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)42;
unsigned short var_16 = (unsigned short)57634;
int zero = 0;
short var_20 = (short)-19134;
int var_21 = -622818515;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
