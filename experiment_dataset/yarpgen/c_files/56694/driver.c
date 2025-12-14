#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_4 = 1113778725884456600LL;
int var_5 = 1843113440;
int var_6 = 1583893582;
long long int var_7 = -2050108418911570161LL;
unsigned int var_9 = 3517482302U;
unsigned int var_10 = 3624154109U;
unsigned long long int var_13 = 13157510698140965148ULL;
unsigned long long int var_14 = 5952374592717172694ULL;
signed char var_15 = (signed char)-80;
int zero = 0;
int var_17 = -179751700;
unsigned int var_18 = 1897885398U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
