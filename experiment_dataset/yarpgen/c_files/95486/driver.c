#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 744671144252675929LL;
long long int var_2 = 6087543647293482337LL;
long long int var_3 = 5855626422811408713LL;
long long int var_6 = 864779642214618730LL;
long long int var_9 = 30815565682567077LL;
int zero = 0;
long long int var_10 = -1691862484073411248LL;
long long int var_11 = -2966951243791312216LL;
long long int var_12 = 6649911138763477573LL;
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
