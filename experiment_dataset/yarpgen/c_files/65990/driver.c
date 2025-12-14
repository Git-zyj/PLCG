#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
short var_1 = (short)1997;
short var_2 = (short)-23954;
unsigned int var_5 = 3753639395U;
unsigned long long int var_7 = 14718908190455638924ULL;
short var_10 = (short)-10619;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 8150389319137698081ULL;
long long int var_14 = 4835580131853846529LL;
short var_15 = (short)24585;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
