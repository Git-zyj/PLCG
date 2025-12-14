#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)11232;
signed char var_3 = (signed char)-48;
_Bool var_5 = (_Bool)0;
long long int var_10 = -4044623340298336718LL;
int zero = 0;
int var_16 = -1106149145;
unsigned short var_17 = (unsigned short)23855;
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
