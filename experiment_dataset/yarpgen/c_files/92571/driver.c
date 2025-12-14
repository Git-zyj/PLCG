#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)143;
unsigned int var_3 = 206964033U;
unsigned int var_4 = 2249810191U;
unsigned char var_5 = (unsigned char)70;
unsigned int var_12 = 1000129222U;
unsigned short var_15 = (unsigned short)28276;
unsigned int var_17 = 929285742U;
int zero = 0;
signed char var_20 = (signed char)-93;
unsigned int var_21 = 4086560298U;
signed char var_22 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
