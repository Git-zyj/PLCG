#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9870791777482564494ULL;
int var_2 = 1851811019;
unsigned long long int var_3 = 7950268027883697521ULL;
unsigned int var_4 = 1478811441U;
unsigned short var_9 = (unsigned short)53052;
long long int var_10 = 6892335823067075663LL;
int zero = 0;
short var_11 = (short)673;
short var_12 = (short)-20584;
int var_13 = 1746219452;
int var_14 = -1774684707;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
