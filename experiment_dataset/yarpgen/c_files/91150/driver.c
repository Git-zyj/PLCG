#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3193965000U;
short var_13 = (short)17631;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 5511328078675676734ULL;
int zero = 0;
unsigned long long int var_20 = 9546116062565573070ULL;
_Bool var_21 = (_Bool)1;
int var_22 = -97182396;
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
