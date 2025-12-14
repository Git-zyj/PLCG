#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 874504425U;
unsigned int var_6 = 4190884600U;
unsigned int var_8 = 950094193U;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -8500810845770011482LL;
unsigned int var_15 = 1860042064U;
int zero = 0;
unsigned char var_18 = (unsigned char)124;
unsigned int var_19 = 3167046229U;
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
