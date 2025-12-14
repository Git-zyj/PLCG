#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)-18;
short var_3 = (short)-6466;
signed char var_5 = (signed char)58;
long long int var_6 = -8540072043815687767LL;
unsigned char var_7 = (unsigned char)52;
unsigned int var_8 = 4133800597U;
unsigned long long int var_9 = 17663476340056341431ULL;
int zero = 0;
long long int var_10 = 2258764113216190135LL;
unsigned short var_11 = (unsigned short)46124;
unsigned char var_12 = (unsigned char)36;
signed char var_13 = (signed char)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
