#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_4 = (signed char)-37;
long long int var_6 = 8390393928412495780LL;
unsigned char var_7 = (unsigned char)131;
long long int var_8 = -2730929660728168608LL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)113;
int zero = 0;
signed char var_12 = (signed char)110;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-2221;
unsigned char var_15 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
