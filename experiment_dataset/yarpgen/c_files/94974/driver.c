#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50680;
int var_2 = 1170602491;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)37865;
unsigned int var_6 = 2572495462U;
short var_7 = (short)4893;
int var_8 = 1316148866;
unsigned char var_9 = (unsigned char)78;
short var_10 = (short)22222;
int zero = 0;
int var_11 = 1289966656;
unsigned short var_12 = (unsigned short)38435;
void init() {
}

void checksum() {
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
