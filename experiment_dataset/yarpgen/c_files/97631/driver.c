#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3825751160U;
unsigned int var_5 = 3298530274U;
unsigned int var_7 = 3420326180U;
int zero = 0;
unsigned long long int var_10 = 6889416625973158639ULL;
long long int var_11 = 5925035546873970311LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
