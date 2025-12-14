#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_4 = (signed char)-4;
unsigned int var_12 = 1828126614U;
int var_13 = -1773431197;
unsigned short var_14 = (unsigned short)28447;
unsigned char var_15 = (unsigned char)55;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 11448489506495998588ULL;
unsigned long long int var_19 = 6032069174639123935ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
