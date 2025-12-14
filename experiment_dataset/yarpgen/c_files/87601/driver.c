#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17037396874546348529ULL;
int var_2 = 1630697238;
int var_4 = -1355913199;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 17884158017354159340ULL;
short var_9 = (short)-29288;
long long int var_12 = -4929423675073053886LL;
int zero = 0;
int var_15 = -487874855;
unsigned long long int var_16 = 7145130629481653410ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
