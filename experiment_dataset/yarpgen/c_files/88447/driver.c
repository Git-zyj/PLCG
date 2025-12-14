#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12538225477441897185ULL;
unsigned long long int var_1 = 13360792030246314728ULL;
long long int var_2 = -4313676438508565733LL;
long long int var_3 = -4461196812971525437LL;
unsigned long long int var_4 = 12884244982664136522ULL;
unsigned int var_5 = 3147536257U;
signed char var_8 = (signed char)-22;
signed char var_9 = (signed char)-38;
int var_10 = 2097230849;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
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
