#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 505676402U;
unsigned int var_11 = 2819459927U;
unsigned long long int var_15 = 13974113050739397269ULL;
short var_16 = (short)19683;
int zero = 0;
unsigned long long int var_17 = 3622072618879153248ULL;
int var_18 = -662596813;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)17115;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
