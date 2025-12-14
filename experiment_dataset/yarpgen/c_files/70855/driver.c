#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1394125717;
unsigned int var_2 = 3422480192U;
int var_3 = 1065014242;
long long int var_4 = -1558530615181154226LL;
long long int var_5 = 6322368958414374611LL;
unsigned int var_8 = 713158346U;
long long int var_9 = 1830211591304746537LL;
int zero = 0;
signed char var_10 = (signed char)5;
long long int var_11 = -5019123819122757640LL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
