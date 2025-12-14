#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22518;
long long int var_9 = 5628910748144329256LL;
short var_14 = (short)25192;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 14826129485207981759ULL;
unsigned int var_18 = 3049250499U;
_Bool var_19 = (_Bool)0;
int var_20 = -1206909558;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
