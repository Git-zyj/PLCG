#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 389255224258796875ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 575301829U;
long long int var_9 = -2825781592413788911LL;
short var_10 = (short)-2064;
int zero = 0;
int var_12 = 1665328713;
long long int var_13 = -290624671917285651LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
