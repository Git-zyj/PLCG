#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1692738378U;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)0;
long long int var_7 = 3148558653496261018LL;
unsigned char var_8 = (unsigned char)177;
int var_11 = -10384218;
int var_12 = -222365282;
unsigned char var_15 = (unsigned char)179;
int zero = 0;
short var_16 = (short)-11637;
int var_17 = 1272910717;
short var_18 = (short)-21772;
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
