#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2319087944U;
_Bool var_1 = (_Bool)0;
signed char var_6 = (signed char)-48;
long long int var_8 = -809794246636741390LL;
int var_9 = 1696968187;
_Bool var_14 = (_Bool)0;
int var_16 = -1083183360;
unsigned short var_18 = (unsigned short)28841;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)56;
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
