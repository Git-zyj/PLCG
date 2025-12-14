#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31598;
short var_3 = (short)-10402;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int zero = 0;
int var_12 = -614273065;
unsigned long long int var_13 = 13213643781326198430ULL;
short var_14 = (short)-14891;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
