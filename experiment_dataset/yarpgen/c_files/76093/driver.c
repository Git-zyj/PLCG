#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-15;
int var_3 = 1592843715;
long long int var_5 = 2228113058521320110LL;
unsigned int var_8 = 2155908251U;
short var_10 = (short)4451;
long long int var_11 = 498172975102073763LL;
unsigned char var_12 = (unsigned char)69;
int zero = 0;
long long int var_13 = -3210708592483902080LL;
short var_14 = (short)24237;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
