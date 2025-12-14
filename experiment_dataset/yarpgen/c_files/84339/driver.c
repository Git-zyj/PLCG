#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25563;
unsigned int var_5 = 1516165171U;
unsigned long long int var_7 = 9669823473411100483ULL;
long long int var_9 = -1711772542200040650LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 9658787865583758374ULL;
unsigned int var_13 = 3867961649U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
