#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 347613880021835012ULL;
long long int var_4 = -514886785372835999LL;
long long int var_9 = -7379649305468218928LL;
int zero = 0;
unsigned int var_16 = 389689232U;
unsigned int var_17 = 2041478709U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
