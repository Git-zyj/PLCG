#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)29;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-81;
unsigned int var_12 = 2752760416U;
unsigned char var_16 = (unsigned char)41;
int zero = 0;
short var_19 = (short)-15038;
unsigned char var_20 = (unsigned char)184;
int var_21 = 185091213;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
