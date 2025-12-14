#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)175;
signed char var_4 = (signed char)94;
long long int var_5 = -772600674201635523LL;
unsigned char var_8 = (unsigned char)196;
unsigned short var_9 = (unsigned short)63603;
int zero = 0;
unsigned short var_11 = (unsigned short)21170;
unsigned char var_12 = (unsigned char)158;
long long int var_13 = 3685224357887624961LL;
void init() {
}

void checksum() {
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
