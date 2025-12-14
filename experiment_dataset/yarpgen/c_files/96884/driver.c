#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)2883;
unsigned short var_13 = (unsigned short)55233;
unsigned long long int var_14 = 16241989079048524099ULL;
unsigned short var_16 = (unsigned short)38382;
int zero = 0;
short var_20 = (short)22527;
unsigned char var_21 = (unsigned char)102;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
