#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 14427432220748047132ULL;
_Bool var_4 = (_Bool)1;
long long int var_6 = -5123676264934512757LL;
int var_9 = -1963144696;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 4261801165U;
short var_13 = (short)-17640;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
