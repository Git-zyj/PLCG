#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 8758178477533397649ULL;
unsigned int var_4 = 728397584U;
unsigned long long int var_6 = 11622704635820338052ULL;
signed char var_7 = (signed char)53;
long long int var_8 = 5292562836196883861LL;
signed char var_9 = (signed char)84;
int zero = 0;
unsigned int var_10 = 1911979499U;
_Bool var_11 = (_Bool)1;
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
