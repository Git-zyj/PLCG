#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)117;
int var_8 = 1613644722;
signed char var_9 = (signed char)91;
signed char var_10 = (signed char)34;
unsigned int var_14 = 4148396257U;
int zero = 0;
int var_19 = 1344237969;
unsigned int var_20 = 2914534959U;
void init() {
}

void checksum() {
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
