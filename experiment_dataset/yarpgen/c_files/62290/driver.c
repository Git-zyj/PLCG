#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
unsigned short var_7 = (unsigned short)62463;
int var_12 = 1695429820;
int var_17 = 1604458276;
int zero = 0;
long long int var_19 = -8618201402930803786LL;
unsigned short var_20 = (unsigned short)60437;
void init() {
}

void checksum() {
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
