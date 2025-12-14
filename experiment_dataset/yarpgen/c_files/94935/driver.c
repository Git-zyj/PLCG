#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1130913120U;
unsigned short var_8 = (unsigned short)8993;
unsigned short var_13 = (unsigned short)12156;
int zero = 0;
short var_16 = (short)2849;
unsigned short var_17 = (unsigned short)52922;
long long int var_18 = -4778706512116997350LL;
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
