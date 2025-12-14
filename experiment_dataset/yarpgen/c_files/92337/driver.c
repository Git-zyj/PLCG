#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_5 = 5567779831899922288LL;
long long int var_8 = 357228334835874115LL;
unsigned int var_13 = 1627844866U;
short var_14 = (short)-26774;
int zero = 0;
short var_16 = (short)17472;
unsigned long long int var_17 = 10278189984810594857ULL;
long long int var_18 = -2206800844554303896LL;
unsigned short var_19 = (unsigned short)50033;
signed char var_20 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
