#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 14262965U;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)115;
int zero = 0;
int var_14 = -340758495;
unsigned long long int var_15 = 18200192403975922504ULL;
void init() {
}

void checksum() {
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
