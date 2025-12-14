#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -191426083920471604LL;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)11517;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1135158524U;
long long int var_12 = -1029933863146229636LL;
int zero = 0;
short var_14 = (short)-26495;
_Bool var_15 = (_Bool)0;
short var_16 = (short)32105;
unsigned int var_17 = 2810247598U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
