#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
short var_8 = (short)-2703;
_Bool var_10 = (_Bool)1;
int var_16 = 185494803;
int zero = 0;
unsigned long long int var_20 = 17971397665063243773ULL;
short var_21 = (short)11252;
signed char var_22 = (signed char)74;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
