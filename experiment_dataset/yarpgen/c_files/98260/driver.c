#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2458256506U;
int var_5 = -1765297266;
_Bool var_7 = (_Bool)0;
int var_10 = -1696343305;
unsigned long long int var_13 = 12828839894173684696ULL;
int zero = 0;
int var_18 = 1666494147;
unsigned long long int var_19 = 8105932244861353477ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
