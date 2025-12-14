#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = -9110803941559487075LL;
_Bool var_4 = (_Bool)1;
int var_6 = 1015542133;
unsigned char var_7 = (unsigned char)218;
unsigned int var_11 = 1734784929U;
int zero = 0;
long long int var_12 = 8958754605471803072LL;
short var_13 = (short)18979;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
