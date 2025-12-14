#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5187032055266134155LL;
long long int var_8 = -6075026321695761043LL;
unsigned short var_10 = (unsigned short)40585;
int zero = 0;
unsigned long long int var_13 = 13317923058149397293ULL;
int var_14 = -1374746889;
_Bool var_15 = (_Bool)0;
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
