#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51824;
unsigned short var_4 = (unsigned short)29066;
unsigned short var_5 = (unsigned short)34421;
unsigned char var_16 = (unsigned char)35;
int zero = 0;
int var_18 = 562459453;
unsigned int var_19 = 3905326606U;
unsigned int var_20 = 492687472U;
unsigned int var_21 = 3173359245U;
short var_22 = (short)-602;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
