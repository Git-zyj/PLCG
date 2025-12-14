#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)110;
long long int var_6 = -791890778129113804LL;
unsigned char var_8 = (unsigned char)78;
unsigned char var_12 = (unsigned char)128;
unsigned short var_14 = (unsigned short)57950;
unsigned int var_15 = 1255013431U;
int zero = 0;
int var_16 = -413908023;
unsigned char var_17 = (unsigned char)252;
_Bool var_18 = (_Bool)0;
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
