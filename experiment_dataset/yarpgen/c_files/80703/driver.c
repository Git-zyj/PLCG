#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 611001067U;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2753732731U;
unsigned long long int var_7 = 4598310145009979077ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)24751;
unsigned int var_11 = 1064065813U;
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
