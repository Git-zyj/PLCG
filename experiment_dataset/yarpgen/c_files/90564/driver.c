#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 438019274U;
unsigned int var_4 = 95563260U;
long long int var_5 = 6822865216954290878LL;
int var_10 = -1204436487;
unsigned long long int var_13 = 785532632294962416ULL;
int zero = 0;
long long int var_18 = -8927153264569620460LL;
int var_19 = -996727912;
unsigned long long int var_20 = 9902332233732446770ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
