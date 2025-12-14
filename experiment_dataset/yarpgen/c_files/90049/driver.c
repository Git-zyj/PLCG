#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1633767859U;
unsigned short var_8 = (unsigned short)25593;
_Bool var_9 = (_Bool)1;
long long int var_11 = 8694574053377218914LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)96;
unsigned short var_16 = (unsigned short)13580;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
