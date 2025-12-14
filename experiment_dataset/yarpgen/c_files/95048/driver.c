#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1747783024;
int var_1 = 451379504;
unsigned char var_5 = (unsigned char)10;
unsigned short var_8 = (unsigned short)42134;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = -2099436789;
unsigned char var_11 = (unsigned char)173;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
