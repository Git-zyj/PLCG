#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23195;
short var_3 = (short)22670;
unsigned short var_4 = (unsigned short)16105;
unsigned short var_5 = (unsigned short)64008;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)22553;
unsigned char var_10 = (unsigned char)77;
int zero = 0;
short var_12 = (short)-25102;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)142;
unsigned short var_15 = (unsigned short)35280;
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
