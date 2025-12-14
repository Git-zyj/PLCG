#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)94;
long long int var_3 = 580867541301907109LL;
unsigned int var_11 = 1359069646U;
long long int var_12 = 4911232002510323401LL;
short var_15 = (short)28886;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -5855701592038416000LL;
void init() {
}

void checksum() {
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
