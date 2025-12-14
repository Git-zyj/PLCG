#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1529122412;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)234;
unsigned short var_8 = (unsigned short)23003;
short var_9 = (short)32242;
unsigned short var_11 = (unsigned short)62710;
int zero = 0;
int var_12 = 1222180359;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)166;
unsigned int var_15 = 3960412515U;
void init() {
}

void checksum() {
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
