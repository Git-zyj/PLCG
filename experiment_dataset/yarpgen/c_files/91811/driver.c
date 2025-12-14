#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 7504662791654672466ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 1419013917U;
unsigned short var_12 = (unsigned short)49758;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 8048337739353502784ULL;
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
