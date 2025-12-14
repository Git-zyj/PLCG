#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3078180421U;
unsigned char var_2 = (unsigned char)44;
unsigned short var_4 = (unsigned short)52972;
int var_5 = -749799449;
unsigned char var_7 = (unsigned char)170;
short var_12 = (short)11154;
short var_13 = (short)10377;
signed char var_18 = (signed char)40;
int zero = 0;
unsigned short var_19 = (unsigned short)46511;
signed char var_20 = (signed char)7;
unsigned short var_21 = (unsigned short)43433;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
