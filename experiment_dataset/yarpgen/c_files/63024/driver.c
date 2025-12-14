#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned char var_4 = (unsigned char)35;
unsigned short var_7 = (unsigned short)58416;
short var_8 = (short)27119;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-9263;
int var_12 = 1565260647;
int zero = 0;
unsigned char var_13 = (unsigned char)246;
_Bool var_14 = (_Bool)1;
int var_15 = -920651499;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
