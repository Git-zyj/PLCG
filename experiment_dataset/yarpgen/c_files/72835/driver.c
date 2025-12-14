#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1680928406615674025LL;
unsigned int var_4 = 2001725146U;
unsigned long long int var_9 = 10804047954591616884ULL;
unsigned long long int var_11 = 10158162303598687366ULL;
unsigned long long int var_12 = 4475240209989057544ULL;
int zero = 0;
unsigned int var_15 = 1965335062U;
unsigned long long int var_16 = 4379021382010728212ULL;
unsigned int var_17 = 3908990426U;
long long int var_18 = 6119526345983841324LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
