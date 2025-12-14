#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2477092706959932912LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 8441810699956499635ULL;
unsigned short var_10 = (unsigned short)39013;
short var_18 = (short)3004;
int zero = 0;
unsigned int var_19 = 730666347U;
unsigned long long int var_20 = 7764520822090044032ULL;
long long int var_21 = -3869094690477242774LL;
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
