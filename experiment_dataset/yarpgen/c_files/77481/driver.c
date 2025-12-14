#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1136744678;
short var_7 = (short)-9999;
long long int var_8 = -2459385636202265329LL;
long long int var_10 = 4960159517233447489LL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)41078;
int zero = 0;
int var_15 = -1423915278;
signed char var_16 = (signed char)77;
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
