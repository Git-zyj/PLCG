#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7143193912471346054LL;
int var_9 = -1322239772;
unsigned long long int var_10 = 12668954953016103618ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)24733;
unsigned long long int var_13 = 6774277189316666570ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
