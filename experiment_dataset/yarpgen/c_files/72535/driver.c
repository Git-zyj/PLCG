#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
_Bool var_6 = (_Bool)1;
long long int var_10 = -2675498801792396269LL;
unsigned short var_11 = (unsigned short)12540;
signed char var_12 = (signed char)92;
unsigned int var_14 = 1827477300U;
long long int var_15 = -7632966666418179874LL;
int zero = 0;
short var_18 = (short)-15038;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 8291246265050459303ULL;
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
