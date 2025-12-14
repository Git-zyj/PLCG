#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65300;
unsigned char var_2 = (unsigned char)54;
unsigned int var_4 = 4127428273U;
signed char var_5 = (signed char)12;
unsigned short var_6 = (unsigned short)6723;
int var_7 = 1878498232;
unsigned int var_8 = 3524464886U;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)35;
unsigned int var_13 = 2854087047U;
int var_14 = -669578796;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
