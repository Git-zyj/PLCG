#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 7783968676235430211ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_13 = 10644159810778702275ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 5258733682185912243LL;
unsigned long long int var_17 = 1103998911458717111ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
