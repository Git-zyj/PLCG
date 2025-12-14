#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -896000694;
unsigned long long int var_2 = 793215215289068875ULL;
int var_11 = 1788367989;
int var_13 = -911769102;
int zero = 0;
int var_15 = 1185094544;
unsigned long long int var_16 = 1203533964387462646ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
