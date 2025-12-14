#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = 2884539601466461642LL;
signed char var_6 = (signed char)-35;
long long int var_8 = -8455232467494332297LL;
int var_10 = -1430856808;
unsigned short var_11 = (unsigned short)63279;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -7560940357559737245LL;
void init() {
}

void checksum() {
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
