#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 346122735U;
unsigned long long int var_1 = 760262355603945289ULL;
unsigned long long int var_8 = 15809519173936477872ULL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-5062;
long long int var_12 = -116335883651973214LL;
int zero = 0;
short var_17 = (short)-13594;
unsigned int var_18 = 3618607490U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
