#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2671097286U;
signed char var_5 = (signed char)-33;
signed char var_9 = (signed char)-93;
long long int var_12 = -4841188834653773796LL;
int zero = 0;
signed char var_14 = (signed char)-90;
unsigned long long int var_15 = 6133730333247708532ULL;
void init() {
}

void checksum() {
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
