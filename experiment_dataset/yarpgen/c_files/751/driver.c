#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1902148458;
unsigned long long int var_8 = 17077520426291438423ULL;
int zero = 0;
long long int var_10 = -789124699795713786LL;
signed char var_11 = (signed char)123;
unsigned int var_12 = 3106697222U;
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
