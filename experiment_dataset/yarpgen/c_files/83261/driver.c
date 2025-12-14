#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)5;
unsigned int var_2 = 517664183U;
unsigned short var_8 = (unsigned short)11978;
unsigned char var_9 = (unsigned char)172;
int zero = 0;
unsigned int var_17 = 3416649917U;
_Bool var_18 = (_Bool)0;
long long int var_19 = -7972655271042894484LL;
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
