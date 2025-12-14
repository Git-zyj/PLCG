#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_7 = -7863560271038920576LL;
int zero = 0;
unsigned int var_11 = 716776986U;
short var_12 = (short)-7095;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
