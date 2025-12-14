#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1298971217;
unsigned int var_8 = 3355396138U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 6095456041621641632ULL;
long long int var_13 = -2426791907972571014LL;
unsigned int var_14 = 3661001809U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
