#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 3759093508U;
unsigned char var_14 = (unsigned char)88;
unsigned int var_15 = 3459999551U;
unsigned long long int var_17 = 10000191662202892786ULL;
long long int var_18 = -6095760751110068476LL;
int zero = 0;
unsigned int var_19 = 3513590630U;
signed char var_20 = (signed char)-28;
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
