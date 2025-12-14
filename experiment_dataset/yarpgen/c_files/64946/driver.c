#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7815886763417923284LL;
unsigned short var_2 = (unsigned short)37707;
_Bool var_3 = (_Bool)0;
int zero = 0;
long long int var_10 = -5817266107463564003LL;
unsigned short var_11 = (unsigned short)47576;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
