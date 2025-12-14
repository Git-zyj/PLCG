#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)37;
_Bool var_1 = (_Bool)0;
long long int var_4 = -3383825089780302959LL;
_Bool var_10 = (_Bool)1;
short var_12 = (short)5106;
int zero = 0;
unsigned long long int var_13 = 6913386401694005135ULL;
_Bool var_14 = (_Bool)1;
int var_15 = -1636686963;
void init() {
}

void checksum() {
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
