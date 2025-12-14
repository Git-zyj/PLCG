#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1359452442;
unsigned char var_3 = (unsigned char)136;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 1530178920819018273ULL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
short var_9 = (short)21532;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
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
