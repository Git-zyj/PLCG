#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)11730;
signed char var_4 = (signed char)58;
unsigned int var_5 = 4183336836U;
unsigned char var_6 = (unsigned char)175;
unsigned int var_9 = 2778168124U;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)62125;
unsigned char var_15 = (unsigned char)168;
unsigned char var_16 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
