#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17527430216045422556ULL;
signed char var_7 = (signed char)-21;
unsigned char var_8 = (unsigned char)245;
int var_13 = -1437955371;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 322871405;
long long int var_16 = -2493786736001461392LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
