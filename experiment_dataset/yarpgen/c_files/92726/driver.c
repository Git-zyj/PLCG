#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)19;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 11201214201878579921ULL;
_Bool var_10 = (_Bool)1;
_Bool var_13 = (_Bool)0;
long long int var_14 = -7629215703936693458LL;
int zero = 0;
signed char var_16 = (signed char)-122;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
