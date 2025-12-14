#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1996458076U;
long long int var_4 = 6923196021263882586LL;
int var_5 = -1798926166;
unsigned int var_10 = 1411710000U;
int zero = 0;
unsigned short var_12 = (unsigned short)33557;
unsigned long long int var_13 = 1647331320061354884ULL;
short var_14 = (short)-27265;
unsigned long long int var_15 = 11668902642186594497ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
