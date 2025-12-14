#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11348;
unsigned short var_3 = (unsigned short)14230;
signed char var_7 = (signed char)8;
long long int var_8 = 2791296312165464261LL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)251;
_Bool var_12 = (_Bool)1;
short var_17 = (short)-4180;
int zero = 0;
unsigned short var_18 = (unsigned short)49882;
unsigned int var_19 = 364457588U;
long long int var_20 = 4943003823148016697LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
