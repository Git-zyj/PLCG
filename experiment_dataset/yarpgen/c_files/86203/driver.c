#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-48;
_Bool var_9 = (_Bool)0;
long long int var_11 = 4714682241309753085LL;
unsigned char var_14 = (unsigned char)222;
int zero = 0;
unsigned int var_18 = 210229394U;
long long int var_19 = 9068787491606825084LL;
void init() {
}

void checksum() {
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
