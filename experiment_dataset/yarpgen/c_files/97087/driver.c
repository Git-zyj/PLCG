#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_8 = -6104958173347068122LL;
long long int var_10 = 3831767121061919228LL;
unsigned short var_12 = (unsigned short)33067;
long long int var_13 = 3608849962341647979LL;
int zero = 0;
long long int var_16 = -3476894790101449357LL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)12431;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
