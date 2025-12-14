#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7350;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)37;
_Bool var_7 = (_Bool)1;
short var_8 = (short)31885;
unsigned int var_10 = 1601085690U;
int var_12 = 1330465419;
int zero = 0;
int var_13 = 1372772284;
unsigned short var_14 = (unsigned short)46580;
unsigned int var_15 = 285064365U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
