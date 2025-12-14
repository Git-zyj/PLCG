#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1211335441U;
int var_4 = -852461554;
_Bool var_10 = (_Bool)1;
unsigned int var_14 = 3174114228U;
int zero = 0;
long long int var_15 = -6388570459650306530LL;
long long int var_16 = 5255701728518822123LL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 989435376749878847ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
