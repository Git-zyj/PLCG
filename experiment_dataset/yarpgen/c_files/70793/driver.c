#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16658;
unsigned short var_1 = (unsigned short)40316;
_Bool var_7 = (_Bool)0;
unsigned long long int var_12 = 2534827144838011273ULL;
long long int var_14 = -4691967192864735452LL;
short var_17 = (short)-7051;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)1939;
int var_22 = -210236004;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
