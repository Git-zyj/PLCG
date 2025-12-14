#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6218278774695874474LL;
signed char var_10 = (signed char)96;
short var_11 = (short)-16081;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)109;
_Bool var_15 = (_Bool)1;
long long int var_16 = 3996739382642813367LL;
signed char var_17 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
