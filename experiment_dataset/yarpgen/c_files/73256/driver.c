#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22381;
unsigned long long int var_4 = 8038996645905083324ULL;
_Bool var_6 = (_Bool)0;
short var_9 = (short)-28897;
int zero = 0;
unsigned long long int var_11 = 6807031095428032528ULL;
long long int var_12 = -3589662743805523335LL;
signed char var_13 = (signed char)-20;
void init() {
}

void checksum() {
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
