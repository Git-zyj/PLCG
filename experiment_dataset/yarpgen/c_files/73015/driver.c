#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6360568869517413405LL;
unsigned short var_1 = (unsigned short)21111;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 11842915720031909577ULL;
int var_6 = -1174819795;
int var_8 = -1365899282;
unsigned long long int var_9 = 9624513159685134016ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -6947521713997716498LL;
long long int var_12 = 7143915647717668570LL;
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
