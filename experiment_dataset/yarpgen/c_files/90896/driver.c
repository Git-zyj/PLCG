#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1179161689U;
long long int var_7 = 2608298949124237544LL;
int zero = 0;
unsigned long long int var_19 = 13774462092025392743ULL;
long long int var_20 = 7509730382003747271LL;
unsigned int var_21 = 2773245534U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
