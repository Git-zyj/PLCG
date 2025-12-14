#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7381527485198163011LL;
int var_7 = -811302351;
long long int var_10 = 8730214623220166673LL;
unsigned int var_12 = 3465217705U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 9504577411365887857ULL;
short var_17 = (short)-30213;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
