#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 3313159239294293419LL;
unsigned long long int var_13 = 1866808473038416996ULL;
unsigned int var_19 = 249121287U;
int zero = 0;
int var_20 = 2058637702;
unsigned int var_21 = 36374831U;
int var_22 = 897067163;
void init() {
}

void checksum() {
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
