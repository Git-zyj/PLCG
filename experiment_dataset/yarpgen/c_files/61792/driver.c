#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned short var_9 = (unsigned short)37488;
int var_11 = -943034062;
unsigned int var_12 = 3506459023U;
unsigned int var_14 = 3904588595U;
long long int var_16 = 9035917763347714272LL;
int zero = 0;
unsigned int var_17 = 2911852791U;
signed char var_18 = (signed char)-35;
int var_19 = -813857010;
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
