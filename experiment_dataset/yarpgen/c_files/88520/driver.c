#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23515;
unsigned long long int var_1 = 7679661457958897709ULL;
unsigned int var_2 = 4009040819U;
unsigned long long int var_8 = 18341181911467806619ULL;
int zero = 0;
long long int var_12 = 8386560981430509593LL;
signed char var_13 = (signed char)-94;
unsigned long long int var_14 = 11733128278474304732ULL;
unsigned long long int var_15 = 3262290219598022632ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
