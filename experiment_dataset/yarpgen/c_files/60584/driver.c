#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56369;
unsigned char var_3 = (unsigned char)170;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)254;
long long int var_8 = 8482683207551602639LL;
unsigned short var_9 = (unsigned short)37719;
unsigned short var_10 = (unsigned short)45404;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)23281;
short var_13 = (short)2445;
unsigned char var_14 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
