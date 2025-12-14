#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)3;
signed char var_4 = (signed char)4;
_Bool var_5 = (_Bool)0;
short var_7 = (short)10970;
unsigned int var_10 = 3167212577U;
int zero = 0;
long long int var_13 = -8690074094722824333LL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)59911;
void init() {
}

void checksum() {
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
