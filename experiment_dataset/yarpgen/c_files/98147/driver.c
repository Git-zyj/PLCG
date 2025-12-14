#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2652759284903726365LL;
unsigned int var_1 = 4287329411U;
long long int var_2 = -6676228411276118262LL;
unsigned long long int var_3 = 4360468063484851608ULL;
unsigned char var_5 = (unsigned char)162;
long long int var_7 = -851052228239681348LL;
unsigned char var_14 = (unsigned char)243;
int zero = 0;
signed char var_16 = (signed char)-93;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
