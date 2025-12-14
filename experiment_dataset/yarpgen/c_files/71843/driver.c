#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_5 = (short)15114;
unsigned char var_7 = (unsigned char)132;
int var_10 = 1330632241;
long long int var_11 = 7030366104734728998LL;
unsigned long long int var_13 = 1800866167365248343ULL;
int zero = 0;
unsigned long long int var_14 = 16002727790485241122ULL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2674224838U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
