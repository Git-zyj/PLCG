#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3111105337U;
unsigned char var_4 = (unsigned char)131;
unsigned short var_13 = (unsigned short)39601;
unsigned short var_14 = (unsigned short)25197;
unsigned long long int var_19 = 12127697397182317186ULL;
int zero = 0;
unsigned long long int var_20 = 1404699562415471172ULL;
unsigned char var_21 = (unsigned char)14;
short var_22 = (short)21773;
unsigned long long int var_23 = 2728212894420640647ULL;
unsigned int var_24 = 3472598882U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
