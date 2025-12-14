#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2139562502U;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-3246;
long long int var_8 = -5728209346200005612LL;
int var_9 = -1570015522;
int zero = 0;
short var_10 = (short)3786;
long long int var_11 = -4179298848341525257LL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
