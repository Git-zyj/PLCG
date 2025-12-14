#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)182;
short var_2 = (short)-13419;
short var_4 = (short)-24321;
long long int var_8 = 4758331794397452842LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)33706;
unsigned short var_17 = (unsigned short)62607;
int zero = 0;
long long int var_19 = -7919309084577862510LL;
unsigned short var_20 = (unsigned short)10648;
unsigned short var_21 = (unsigned short)41706;
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
