#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17078573951611284807ULL;
unsigned long long int var_6 = 2262291006426197957ULL;
int var_7 = -584744783;
long long int var_12 = -7041399540039736257LL;
int zero = 0;
unsigned int var_20 = 2190644752U;
unsigned long long int var_21 = 17430047879480792115ULL;
void init() {
}

void checksum() {
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
