#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1948621368U;
signed char var_1 = (signed char)78;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)37937;
int var_6 = -2057783190;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1899343357U;
unsigned char var_13 = (unsigned char)17;
int zero = 0;
signed char var_14 = (signed char)4;
unsigned long long int var_15 = 11729225338337162315ULL;
void init() {
}

void checksum() {
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
