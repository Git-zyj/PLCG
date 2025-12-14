#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1278174872;
signed char var_5 = (signed char)51;
long long int var_10 = 5081394274204308342LL;
short var_13 = (short)8526;
unsigned int var_17 = 3047578309U;
int zero = 0;
signed char var_18 = (signed char)-109;
_Bool var_19 = (_Bool)1;
int var_20 = 573546911;
void init() {
}

void checksum() {
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
