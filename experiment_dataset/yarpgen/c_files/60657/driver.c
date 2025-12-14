#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28071;
short var_3 = (short)-24661;
int var_7 = 515869257;
short var_8 = (short)13063;
unsigned short var_9 = (unsigned short)44012;
int zero = 0;
signed char var_12 = (signed char)125;
unsigned char var_13 = (unsigned char)232;
short var_14 = (short)32516;
unsigned char var_15 = (unsigned char)243;
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
