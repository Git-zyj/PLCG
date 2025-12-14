#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1715225927;
long long int var_3 = 8939671679232353215LL;
unsigned char var_6 = (unsigned char)117;
long long int var_11 = -4605282906252670352LL;
unsigned long long int var_17 = 2397092328577197698ULL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)25;
int zero = 0;
unsigned char var_20 = (unsigned char)252;
unsigned long long int var_21 = 3517286634535746315ULL;
_Bool var_22 = (_Bool)1;
long long int var_23 = -226620721732807473LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
