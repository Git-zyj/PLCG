#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-84;
long long int var_4 = -2284690145364706425LL;
unsigned int var_5 = 4228043410U;
signed char var_6 = (signed char)24;
unsigned long long int var_7 = 15619882802252497467ULL;
int var_8 = -1428611634;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 1658071502460481286LL;
unsigned long long int var_12 = 2311505895442994433ULL;
short var_13 = (short)-28256;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
