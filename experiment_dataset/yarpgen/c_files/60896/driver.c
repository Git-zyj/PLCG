#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = 6526911779780642417LL;
long long int var_15 = 6433045681169580585LL;
long long int var_16 = -5931089872738181559LL;
int zero = 0;
long long int var_19 = 1140546312770957220LL;
long long int var_20 = 3822904261197341585LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
