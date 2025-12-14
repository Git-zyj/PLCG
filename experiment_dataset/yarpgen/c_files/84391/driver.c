#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7043;
unsigned int var_5 = 4011438126U;
long long int var_6 = -1433902141743739250LL;
int var_9 = 109409631;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_17 = 856215818U;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)37140;
long long int var_20 = -1299316116873176141LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
