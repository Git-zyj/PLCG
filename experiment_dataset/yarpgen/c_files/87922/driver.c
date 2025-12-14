#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
short var_3 = (short)5962;
int var_4 = -1063337140;
_Bool var_5 = (_Bool)1;
int var_6 = 1135633017;
_Bool var_7 = (_Bool)1;
unsigned char var_11 = (unsigned char)70;
unsigned short var_12 = (unsigned short)10739;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)(-127 - 1);
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)35316;
short var_18 = (short)-25750;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
