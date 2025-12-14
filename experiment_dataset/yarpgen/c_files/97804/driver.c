#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
unsigned char var_1 = (unsigned char)173;
unsigned char var_2 = (unsigned char)211;
unsigned char var_3 = (unsigned char)204;
long long int var_6 = -3980123136033499619LL;
_Bool var_7 = (_Bool)0;
int var_9 = 22567387;
int var_11 = 153488367;
int var_12 = 1015020263;
int zero = 0;
short var_13 = (short)-29173;
int var_14 = -1933715697;
unsigned short var_15 = (unsigned short)44327;
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
