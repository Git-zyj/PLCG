#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4627977959616208234LL;
unsigned long long int var_6 = 13056829906132406747ULL;
_Bool var_11 = (_Bool)1;
int var_13 = 155693108;
int var_18 = 358016373;
int zero = 0;
signed char var_20 = (signed char)9;
short var_21 = (short)-31923;
_Bool var_22 = (_Bool)1;
int var_23 = -547073431;
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
