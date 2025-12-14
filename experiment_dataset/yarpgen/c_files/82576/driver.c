#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)14;
long long int var_3 = 796081919431813230LL;
long long int var_4 = -3002014322634974379LL;
unsigned int var_5 = 3725297053U;
long long int var_8 = -7623090259266469979LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)13703;
_Bool var_14 = (_Bool)0;
short var_15 = (short)27975;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
