#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4236;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)26685;
unsigned short var_6 = (unsigned short)34264;
unsigned int var_9 = 2829801806U;
int zero = 0;
unsigned char var_10 = (unsigned char)10;
unsigned char var_11 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
