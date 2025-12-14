#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12258180688192951189ULL;
int var_9 = -333954242;
_Bool var_12 = (_Bool)1;
unsigned int var_16 = 219038856U;
int zero = 0;
short var_20 = (short)16802;
short var_21 = (short)22340;
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
