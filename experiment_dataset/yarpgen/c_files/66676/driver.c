#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-26560;
signed char var_10 = (signed char)69;
signed char var_11 = (signed char)7;
int zero = 0;
long long int var_20 = 5001876070955452792LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -4304669540728961839LL;
unsigned short var_23 = (unsigned short)64326;
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
