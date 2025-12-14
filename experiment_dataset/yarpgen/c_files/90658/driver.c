#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -5201082511397525218LL;
int var_10 = -980974361;
unsigned int var_17 = 1913859756U;
int zero = 0;
unsigned int var_19 = 1445462302U;
unsigned long long int var_20 = 1903310986571950183ULL;
unsigned int var_21 = 1462055521U;
long long int var_22 = 6561592180281776725LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
