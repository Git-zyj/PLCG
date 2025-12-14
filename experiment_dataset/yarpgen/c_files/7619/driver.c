#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2787218028U;
signed char var_8 = (signed char)102;
unsigned short var_10 = (unsigned short)21365;
_Bool var_11 = (_Bool)0;
long long int var_12 = -2462106057527039231LL;
int zero = 0;
signed char var_13 = (signed char)(-127 - 1);
unsigned int var_14 = 3710401480U;
void init() {
}

void checksum() {
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
