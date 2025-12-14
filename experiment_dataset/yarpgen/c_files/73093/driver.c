#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-32;
signed char var_2 = (signed char)-73;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-23875;
unsigned char var_7 = (unsigned char)85;
unsigned int var_9 = 224115399U;
short var_10 = (short)5883;
int zero = 0;
short var_12 = (short)-27497;
signed char var_13 = (signed char)58;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
