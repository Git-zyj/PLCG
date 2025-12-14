#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned long long int var_12 = 5962663068767928724ULL;
unsigned short var_17 = (unsigned short)51068;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 13864625759812345498ULL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)123;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
