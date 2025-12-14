#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-42;
_Bool var_1 = (_Bool)0;
unsigned long long int var_5 = 3167488394254887297ULL;
unsigned short var_9 = (unsigned short)10902;
int zero = 0;
short var_12 = (short)-13438;
int var_13 = 936686265;
void init() {
}

void checksum() {
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
