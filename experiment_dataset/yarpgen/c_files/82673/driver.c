#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1611686761;
long long int var_4 = -8572667935435685998LL;
short var_5 = (short)28158;
_Bool var_6 = (_Bool)0;
short var_9 = (short)26981;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)29256;
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
