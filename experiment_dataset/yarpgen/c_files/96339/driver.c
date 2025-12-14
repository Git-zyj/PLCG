#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 293443810U;
short var_6 = (short)-27537;
signed char var_9 = (signed char)105;
unsigned char var_10 = (unsigned char)33;
signed char var_12 = (signed char)66;
int zero = 0;
unsigned short var_17 = (unsigned short)13505;
unsigned char var_18 = (unsigned char)133;
_Bool var_19 = (_Bool)0;
int var_20 = 1311617302;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
