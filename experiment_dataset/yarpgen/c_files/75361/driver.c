#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3236642750099780339ULL;
unsigned char var_5 = (unsigned char)175;
unsigned short var_7 = (unsigned short)1631;
long long int var_8 = -2085001235513578500LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = 1222391993;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
