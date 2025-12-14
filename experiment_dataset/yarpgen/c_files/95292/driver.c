#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_7 = 1017685002243895397ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_14 = 1355265889U;
int zero = 0;
long long int var_20 = 4993954802859136212LL;
unsigned short var_21 = (unsigned short)58775;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
