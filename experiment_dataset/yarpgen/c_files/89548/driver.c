#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-53;
short var_4 = (short)5923;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
long long int var_9 = -8057601578712703083LL;
long long int var_13 = -5930771982614820868LL;
int zero = 0;
short var_15 = (short)17357;
signed char var_16 = (signed char)-25;
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
