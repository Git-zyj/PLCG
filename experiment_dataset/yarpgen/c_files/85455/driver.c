#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 930093972U;
unsigned short var_3 = (unsigned short)40303;
unsigned short var_7 = (unsigned short)43696;
unsigned int var_9 = 1229104288U;
signed char var_11 = (signed char)-53;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-3;
unsigned char var_15 = (unsigned char)143;
void init() {
}

void checksum() {
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
