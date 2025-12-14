#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1997141808831689725LL;
long long int var_9 = -8206609623992854887LL;
short var_10 = (short)19209;
long long int var_12 = 2906138026373299717LL;
unsigned int var_14 = 1727496108U;
int zero = 0;
unsigned long long int var_15 = 11569756988363944019ULL;
int var_16 = -103458591;
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
