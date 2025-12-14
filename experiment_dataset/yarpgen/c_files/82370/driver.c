#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)99;
_Bool var_3 = (_Bool)1;
signed char var_8 = (signed char)18;
unsigned long long int var_10 = 455657693594179663ULL;
int zero = 0;
unsigned long long int var_15 = 3371349132599255782ULL;
short var_16 = (short)-20147;
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
