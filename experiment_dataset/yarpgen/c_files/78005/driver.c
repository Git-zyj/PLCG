#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 14459192551327504LL;
unsigned long long int var_7 = 2640267383825381715ULL;
long long int var_9 = 6921382168575654704LL;
int zero = 0;
unsigned long long int var_10 = 1715751277650927472ULL;
long long int var_11 = 3861627680481468556LL;
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
