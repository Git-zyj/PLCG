#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-13;
unsigned short var_6 = (unsigned short)49623;
long long int var_11 = 8109228454832768508LL;
unsigned int var_12 = 1148345851U;
int var_15 = 1725965736;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_20 = -2416981405769738752LL;
short var_21 = (short)27616;
short var_22 = (short)10120;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
