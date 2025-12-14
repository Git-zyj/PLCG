#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)0;
long long int var_6 = -8627764274542269224LL;
unsigned long long int var_7 = 7133064464310682679ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 17896515267345385843ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
