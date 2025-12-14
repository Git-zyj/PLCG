#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2023400536;
_Bool var_1 = (_Bool)0;
long long int var_11 = -7750532460390013184LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_19 = 37331952;
unsigned char var_20 = (unsigned char)32;
short var_21 = (short)-13148;
unsigned char var_22 = (unsigned char)116;
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
