#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)55;
long long int var_5 = 6958470867808224570LL;
short var_7 = (short)17545;
unsigned int var_8 = 1602015694U;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 6412302212517832560ULL;
unsigned int var_14 = 4282048636U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
