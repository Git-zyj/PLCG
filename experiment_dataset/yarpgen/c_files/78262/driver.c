#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1555955828U;
unsigned int var_5 = 1531554808U;
unsigned char var_6 = (unsigned char)66;
unsigned char var_8 = (unsigned char)4;
int zero = 0;
signed char var_10 = (signed char)114;
unsigned short var_11 = (unsigned short)5416;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
