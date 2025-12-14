#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)24848;
unsigned long long int var_5 = 10863758435495532692ULL;
int var_7 = -150666039;
int zero = 0;
unsigned int var_17 = 1085273560U;
signed char var_18 = (signed char)32;
unsigned int var_19 = 2089219103U;
long long int var_20 = 3497462711793641814LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
