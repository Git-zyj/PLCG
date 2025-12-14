#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-17734;
unsigned long long int var_5 = 10593088480636665891ULL;
_Bool var_9 = (_Bool)1;
short var_11 = (short)9366;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 603790094U;
unsigned int var_20 = 3553309576U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
