#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)109;
int var_3 = 45370037;
unsigned long long int var_4 = 7853197085263882735ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 1091118474834094372ULL;
signed char var_7 = (signed char)82;
unsigned long long int var_8 = 6360861549902892883ULL;
signed char var_10 = (signed char)83;
unsigned long long int var_11 = 10889731576750948364ULL;
int var_12 = 1121456756;
_Bool var_13 = (_Bool)1;
int var_14 = 295498354;
int zero = 0;
int var_15 = -1370440124;
int var_16 = -1734556906;
signed char var_17 = (signed char)74;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 13133803014790719353ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
