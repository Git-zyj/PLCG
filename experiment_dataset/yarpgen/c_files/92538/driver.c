#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)10426;
unsigned char var_4 = (unsigned char)125;
unsigned char var_5 = (unsigned char)97;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)162;
unsigned int var_13 = 629887820U;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)7350;
unsigned int var_16 = 1032077986U;
short var_17 = (short)25657;
void init() {
}

void checksum() {
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
