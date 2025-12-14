#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18130015488219108410ULL;
short var_1 = (short)-25866;
unsigned long long int var_5 = 17101587576261707464ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 1370913076U;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3368746277U;
unsigned int var_11 = 4071116416U;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)25;
unsigned int var_14 = 3708048782U;
short var_15 = (short)-9870;
int zero = 0;
short var_17 = (short)-26817;
short var_18 = (short)-11054;
void init() {
}

void checksum() {
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
