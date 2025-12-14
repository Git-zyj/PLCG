#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = 693515886363750722LL;
long long int var_5 = 863241338918911638LL;
int var_6 = -1247863053;
unsigned long long int var_8 = 2467463126621641346ULL;
int zero = 0;
unsigned long long int var_10 = 14591158058971451516ULL;
signed char var_11 = (signed char)-4;
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
