#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2075916499660759570LL;
long long int var_1 = -4159854602501263211LL;
short var_5 = (short)-28620;
unsigned int var_7 = 1472962245U;
int zero = 0;
unsigned int var_17 = 2872490843U;
unsigned int var_18 = 3234091941U;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2695426768U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
