#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3434630641156308269ULL;
unsigned char var_2 = (unsigned char)201;
unsigned short var_5 = (unsigned short)49076;
unsigned long long int var_8 = 8917066200694270538ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_13 = -5777684807754540839LL;
unsigned short var_14 = (unsigned short)44758;
short var_15 = (short)3644;
unsigned long long int var_16 = 5260250653712302350ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
