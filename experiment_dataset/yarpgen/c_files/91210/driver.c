#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)121;
_Bool var_14 = (_Bool)1;
long long int var_15 = 2723922194191118495LL;
short var_16 = (short)-6459;
int zero = 0;
signed char var_20 = (signed char)71;
unsigned int var_21 = 3475449018U;
unsigned short var_22 = (unsigned short)40707;
long long int var_23 = -798684774884143312LL;
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
