#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_4 = -1641528884;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-24469;
int var_13 = 864149752;
long long int var_15 = 3270571739921631625LL;
int zero = 0;
signed char var_16 = (signed char)15;
short var_17 = (short)-20485;
signed char var_18 = (signed char)-115;
unsigned int var_19 = 1399809243U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
