#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1823871363522796868LL;
signed char var_2 = (signed char)-122;
unsigned long long int var_3 = 4760460404506380354ULL;
unsigned char var_4 = (unsigned char)54;
unsigned short var_6 = (unsigned short)43486;
short var_7 = (short)-20829;
int zero = 0;
unsigned char var_10 = (unsigned char)120;
short var_11 = (short)-16250;
int var_12 = 1569710125;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
