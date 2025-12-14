#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3873756365973693745LL;
_Bool var_5 = (_Bool)0;
int var_6 = 2051409640;
long long int var_9 = 6159047184593354004LL;
unsigned long long int var_11 = 7014888035131920232ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-64;
void init() {
}

void checksum() {
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
