#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
_Bool var_2 = (_Bool)1;
long long int var_3 = -9169733609398999526LL;
long long int var_4 = -5032933341305188610LL;
int zero = 0;
signed char var_20 = (signed char)-38;
unsigned int var_21 = 545455946U;
long long int var_22 = 426904830169016285LL;
long long int var_23 = -8801777340230361135LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
