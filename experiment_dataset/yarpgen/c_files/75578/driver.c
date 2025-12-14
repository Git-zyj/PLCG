#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 3375234940473896131LL;
signed char var_8 = (signed char)-5;
long long int var_9 = -8692718335321911640LL;
long long int var_12 = -8304218118794561000LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-11883;
int var_21 = -1658832594;
long long int var_22 = -7112146147492638057LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
