#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)67;
_Bool var_3 = (_Bool)1;
short var_4 = (short)18493;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
signed char var_14 = (signed char)67;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-47;
_Bool var_17 = (_Bool)0;
int var_18 = 1744533874;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
