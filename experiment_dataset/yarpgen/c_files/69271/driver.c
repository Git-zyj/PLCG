#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3616828125U;
long long int var_1 = -8450643988602985007LL;
unsigned int var_5 = 1042115U;
int var_6 = -56336705;
unsigned int var_8 = 1209816097U;
int var_9 = -1708730005;
int var_11 = 1187043913;
signed char var_13 = (signed char)50;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
short var_18 = (short)23798;
int zero = 0;
short var_20 = (short)27398;
unsigned int var_21 = 609201212U;
unsigned long long int var_22 = 11520150110621801549ULL;
unsigned int var_23 = 2061150271U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
