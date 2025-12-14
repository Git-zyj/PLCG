#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -460480423491611899LL;
long long int var_4 = 4358298792915501991LL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_9 = -9188639356761921245LL;
long long int var_12 = -2427712185260898186LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = -2074799190262829564LL;
long long int var_15 = 1525913654293984156LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
