#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1711143399U;
unsigned int var_3 = 809680510U;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)20626;
signed char var_9 = (signed char)-67;
int zero = 0;
short var_12 = (short)-14312;
unsigned int var_13 = 2389348273U;
unsigned char var_14 = (unsigned char)124;
short var_15 = (short)-8435;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
