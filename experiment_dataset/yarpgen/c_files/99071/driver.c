#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1545168542354479220LL;
unsigned char var_9 = (unsigned char)16;
long long int var_14 = -2525477906715768624LL;
unsigned short var_17 = (unsigned short)15141;
unsigned long long int var_19 = 11329844146561116814ULL;
int zero = 0;
signed char var_20 = (signed char)124;
short var_21 = (short)-13807;
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
