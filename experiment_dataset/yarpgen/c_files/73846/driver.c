#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -869643814;
unsigned int var_3 = 3807163658U;
unsigned long long int var_5 = 893011151197533541ULL;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)74;
unsigned long long int var_16 = 7075422444055787147ULL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -1771315197370422720LL;
int zero = 0;
long long int var_19 = 5804687798812586964LL;
int var_20 = 1054713854;
unsigned short var_21 = (unsigned short)29387;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
