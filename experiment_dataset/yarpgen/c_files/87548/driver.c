#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)158;
unsigned char var_6 = (unsigned char)176;
unsigned char var_7 = (unsigned char)65;
int zero = 0;
signed char var_14 = (signed char)-43;
unsigned short var_15 = (unsigned short)556;
unsigned long long int var_16 = 10129865166109361525ULL;
unsigned char var_17 = (unsigned char)237;
unsigned long long int var_18 = 14900456885892860248ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
