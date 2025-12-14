#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-15228;
unsigned int var_5 = 2747907379U;
signed char var_6 = (signed char)114;
unsigned char var_7 = (unsigned char)153;
short var_8 = (short)-15344;
int zero = 0;
signed char var_10 = (signed char)97;
short var_11 = (short)-10580;
unsigned char var_12 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
