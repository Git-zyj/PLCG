#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2570906283U;
unsigned char var_4 = (unsigned char)133;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-48;
int var_8 = -655933889;
int var_9 = 512138211;
signed char var_10 = (signed char)-83;
int zero = 0;
short var_12 = (short)24413;
unsigned char var_13 = (unsigned char)99;
short var_14 = (short)-18735;
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
