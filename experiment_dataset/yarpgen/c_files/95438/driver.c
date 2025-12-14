#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20164;
unsigned char var_2 = (unsigned char)196;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)16398;
unsigned char var_8 = (unsigned char)192;
long long int var_10 = -3655671329039419871LL;
int zero = 0;
short var_11 = (short)12826;
unsigned char var_12 = (unsigned char)121;
unsigned char var_13 = (unsigned char)224;
unsigned char var_14 = (unsigned char)146;
unsigned int var_15 = 2083766159U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
