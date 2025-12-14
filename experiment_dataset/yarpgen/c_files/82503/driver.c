#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-27821;
short var_2 = (short)-2840;
unsigned int var_3 = 3696682882U;
short var_4 = (short)-14560;
signed char var_6 = (signed char)53;
signed char var_7 = (signed char)-78;
_Bool var_8 = (_Bool)0;
long long int var_10 = 8146553848125448153LL;
int zero = 0;
long long int var_11 = 4646765238056938538LL;
unsigned int var_12 = 2477991136U;
unsigned long long int var_13 = 8152520589925418096ULL;
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
