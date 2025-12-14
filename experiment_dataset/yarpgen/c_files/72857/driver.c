#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8658100860243926086LL;
int var_5 = -1663753082;
long long int var_8 = 1597053531289227992LL;
int zero = 0;
int var_11 = -778499637;
long long int var_12 = 2091753836293596738LL;
unsigned long long int var_13 = 16383413480686962043ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
