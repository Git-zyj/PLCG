#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_6 = (short)11289;
unsigned long long int var_14 = 15595997591961601579ULL;
unsigned short var_16 = (unsigned short)12489;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)16501;
unsigned short var_19 = (unsigned short)6017;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
