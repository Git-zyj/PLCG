#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3513808800217476480LL;
signed char var_10 = (signed char)115;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 14020012040752433806ULL;
short var_21 = (short)23783;
short var_22 = (short)26262;
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
