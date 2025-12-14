#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23677;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)47;
int var_5 = -1591843692;
int var_7 = -528883261;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int var_12 = -166208087;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-73;
long long int var_15 = -4549388974846757677LL;
signed char var_16 = (signed char)13;
signed char var_17 = (signed char)65;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
