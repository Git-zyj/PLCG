#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 8969718866363025395ULL;
short var_11 = (short)18141;
unsigned long long int var_14 = 8404722903463731893ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_18 = 1048309385025681110LL;
unsigned char var_19 = (unsigned char)146;
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
