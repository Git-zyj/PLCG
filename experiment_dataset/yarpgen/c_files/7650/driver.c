#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
_Bool var_2 = (_Bool)1;
long long int var_8 = 9192599165521784420LL;
_Bool var_9 = (_Bool)1;
long long int var_14 = -3582377660517503769LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 2433937525212729687LL;
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
