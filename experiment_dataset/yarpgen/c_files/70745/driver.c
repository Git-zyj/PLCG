#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10816;
unsigned short var_4 = (unsigned short)40943;
_Bool var_5 = (_Bool)0;
unsigned short var_13 = (unsigned short)11762;
_Bool var_16 = (_Bool)1;
unsigned short var_18 = (unsigned short)39675;
int zero = 0;
unsigned int var_19 = 886609778U;
unsigned short var_20 = (unsigned short)13144;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
