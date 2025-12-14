#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2612830785295027298LL;
int var_2 = 1502072790;
long long int var_3 = 3384606225150995279LL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-51;
unsigned int var_12 = 1501596201U;
signed char var_15 = (signed char)-30;
unsigned short var_16 = (unsigned short)64048;
long long int var_17 = -5556789470484942845LL;
unsigned long long int var_18 = 14123587304126266604ULL;
int zero = 0;
int var_19 = 914214845;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
