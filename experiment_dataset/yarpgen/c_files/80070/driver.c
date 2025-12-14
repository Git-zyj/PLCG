#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3706702057U;
unsigned short var_2 = (unsigned short)59538;
signed char var_3 = (signed char)-73;
unsigned int var_4 = 1651981245U;
unsigned char var_5 = (unsigned char)140;
unsigned char var_10 = (unsigned char)142;
int zero = 0;
unsigned int var_14 = 2068680161U;
signed char var_15 = (signed char)70;
void init() {
}

void checksum() {
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
