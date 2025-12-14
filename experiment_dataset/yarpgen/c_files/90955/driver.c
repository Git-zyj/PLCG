#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29828;
int var_2 = 1078637813;
long long int var_4 = -7265462267430069326LL;
_Bool var_12 = (_Bool)1;
int var_17 = -956219270;
int zero = 0;
unsigned short var_18 = (unsigned short)50293;
int var_19 = -527283165;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
