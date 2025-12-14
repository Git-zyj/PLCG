#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)91;
signed char var_3 = (signed char)-22;
signed char var_4 = (signed char)-126;
unsigned long long int var_8 = 7654973308534058593ULL;
short var_11 = (short)28096;
short var_13 = (short)-23844;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -1344151190;
_Bool var_20 = (_Bool)0;
long long int var_21 = 2149610865455162488LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
