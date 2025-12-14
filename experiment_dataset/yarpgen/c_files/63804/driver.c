#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3023511082424952832ULL;
unsigned long long int var_3 = 7058868480582830077ULL;
long long int var_5 = -4550336646551814200LL;
short var_7 = (short)-11009;
unsigned int var_11 = 1099546417U;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-32660;
int zero = 0;
short var_20 = (short)-15701;
long long int var_21 = 5545152615873854088LL;
void init() {
}

void checksum() {
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
