#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1472505069U;
unsigned short var_2 = (unsigned short)43096;
unsigned short var_3 = (unsigned short)12823;
short var_7 = (short)12417;
unsigned short var_10 = (unsigned short)31649;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = 2076775235949830610LL;
short var_13 = (short)22018;
unsigned char var_14 = (unsigned char)242;
long long int var_15 = 3419069282509481355LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
