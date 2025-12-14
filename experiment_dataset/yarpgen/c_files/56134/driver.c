#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_12 = 3532019110U;
unsigned int var_14 = 3324399088U;
long long int var_15 = -7326025837445522200LL;
int zero = 0;
unsigned long long int var_19 = 6826356965626945404ULL;
unsigned long long int var_20 = 10786626632384246604ULL;
long long int var_21 = -4318024918467051497LL;
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
