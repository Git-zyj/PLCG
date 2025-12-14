#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -147568921;
short var_4 = (short)-13585;
signed char var_6 = (signed char)30;
long long int var_8 = 5687394925909732855LL;
long long int var_9 = -3333305121981412777LL;
int zero = 0;
short var_14 = (short)11484;
_Bool var_15 = (_Bool)0;
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
