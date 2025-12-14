#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)30716;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)17697;
unsigned long long int var_17 = 353662325358168523ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)50289;
unsigned short var_21 = (unsigned short)58921;
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
