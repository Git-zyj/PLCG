#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9506537854172840154ULL;
unsigned short var_2 = (unsigned short)4192;
unsigned short var_7 = (unsigned short)15546;
unsigned long long int var_10 = 8934355074435970936ULL;
int zero = 0;
unsigned long long int var_11 = 3632854520377756761ULL;
int var_12 = -1859848174;
void init() {
}

void checksum() {
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
