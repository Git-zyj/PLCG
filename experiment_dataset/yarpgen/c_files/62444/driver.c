#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)214;
signed char var_7 = (signed char)38;
unsigned char var_8 = (unsigned char)159;
int zero = 0;
short var_10 = (short)1218;
signed char var_11 = (signed char)94;
short var_12 = (short)-19793;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
