#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2080935300U;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 905112917U;
long long int var_21 = -5357161733744685101LL;
unsigned long long int var_22 = 17721588550915280364ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
