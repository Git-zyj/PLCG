#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_3 = (_Bool)1;
long long int var_4 = -7240954877456187562LL;
unsigned long long int var_7 = 2495506323131424159ULL;
unsigned int var_8 = 3804626007U;
int zero = 0;
short var_10 = (short)7751;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 10040390292819060962ULL;
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
