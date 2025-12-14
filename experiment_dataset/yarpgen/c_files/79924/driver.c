#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)227;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)121;
unsigned int var_5 = 2984721811U;
int var_6 = 1544012360;
long long int var_7 = 8599196850413213995LL;
unsigned short var_8 = (unsigned short)63441;
unsigned short var_10 = (unsigned short)4419;
unsigned char var_11 = (unsigned char)189;
_Bool var_12 = (_Bool)0;
short var_14 = (short)20801;
int zero = 0;
unsigned char var_16 = (unsigned char)78;
unsigned long long int var_17 = 9691730063134995349ULL;
void init() {
}

void checksum() {
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
