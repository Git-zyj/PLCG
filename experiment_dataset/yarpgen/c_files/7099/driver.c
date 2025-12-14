#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11896454742377413495ULL;
unsigned short var_1 = (unsigned short)40473;
signed char var_6 = (signed char)126;
signed char var_8 = (signed char)85;
int zero = 0;
unsigned short var_10 = (unsigned short)34737;
int var_11 = 736946328;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
