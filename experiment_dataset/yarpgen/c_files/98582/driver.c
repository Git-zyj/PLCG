#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
unsigned char var_1 = (unsigned char)173;
int var_2 = 498994849;
long long int var_3 = 2146130004566157657LL;
short var_5 = (short)-32014;
_Bool var_8 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)18869;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
