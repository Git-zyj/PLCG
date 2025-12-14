#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15592782562279949708ULL;
long long int var_2 = -6030407945720552255LL;
unsigned int var_7 = 3249842267U;
signed char var_8 = (signed char)-16;
unsigned int var_14 = 2101147299U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 3051639475U;
short var_17 = (short)15931;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
