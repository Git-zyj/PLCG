#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)-127;
unsigned char var_9 = (unsigned char)200;
unsigned int var_10 = 2197045035U;
unsigned short var_11 = (unsigned short)203;
int var_12 = -653672338;
short var_16 = (short)-28102;
int zero = 0;
unsigned int var_17 = 265719011U;
signed char var_18 = (signed char)22;
void init() {
}

void checksum() {
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
