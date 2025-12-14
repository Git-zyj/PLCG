#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)13594;
unsigned char var_13 = (unsigned char)219;
unsigned short var_14 = (unsigned short)35558;
int var_15 = -237258470;
short var_16 = (short)11874;
unsigned char var_19 = (unsigned char)233;
int zero = 0;
unsigned short var_20 = (unsigned short)26083;
short var_21 = (short)21672;
int var_22 = -453780380;
unsigned char var_23 = (unsigned char)85;
void init() {
}

void checksum() {
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
