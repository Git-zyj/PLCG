#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3249821117724623314LL;
unsigned char var_4 = (unsigned char)231;
int var_8 = -1597748587;
int var_9 = 356033802;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 16317867691550307264ULL;
int var_14 = 444938264;
int var_15 = -195437182;
unsigned int var_16 = 304999162U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
