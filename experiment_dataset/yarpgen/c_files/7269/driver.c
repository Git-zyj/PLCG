#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_8 = -428041225;
_Bool var_14 = (_Bool)0;
signed char var_17 = (signed char)-80;
int zero = 0;
unsigned short var_20 = (unsigned short)13368;
short var_21 = (short)477;
unsigned long long int var_22 = 3058549085293195948ULL;
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
