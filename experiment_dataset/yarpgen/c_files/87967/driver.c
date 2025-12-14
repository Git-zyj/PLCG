#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
unsigned int var_1 = 4207319632U;
unsigned short var_14 = (unsigned short)34791;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)33419;
short var_19 = (short)-9472;
short var_20 = (short)7754;
unsigned int var_21 = 1179125305U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
