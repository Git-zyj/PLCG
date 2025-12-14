#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1906890635U;
unsigned int var_2 = 4106528485U;
unsigned int var_3 = 3912997927U;
int zero = 0;
unsigned int var_10 = 3851323164U;
unsigned int var_11 = 3825829193U;
unsigned int var_12 = 2405503131U;
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
