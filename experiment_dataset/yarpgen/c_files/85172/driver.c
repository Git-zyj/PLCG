#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)62819;
unsigned short var_8 = (unsigned short)23720;
long long int var_13 = 8609389695942104640LL;
short var_14 = (short)9102;
int zero = 0;
unsigned short var_19 = (unsigned short)43393;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)62083;
unsigned char var_22 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
