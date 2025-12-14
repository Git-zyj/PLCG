#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 4076555520U;
unsigned char var_7 = (unsigned char)93;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-59;
int zero = 0;
long long int var_13 = -7450090741768862331LL;
signed char var_14 = (signed char)66;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
