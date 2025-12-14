#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3335341148U;
_Bool var_3 = (_Bool)1;
int var_4 = -1776314225;
long long int var_5 = -1402248051381340305LL;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 2824724162U;
long long int var_13 = 1191628856989773568LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
