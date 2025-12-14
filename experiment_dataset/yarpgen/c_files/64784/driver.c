#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1988720766738240366LL;
unsigned long long int var_4 = 14245703833944922162ULL;
unsigned short var_6 = (unsigned short)27315;
unsigned long long int var_9 = 9503589240326984641ULL;
int zero = 0;
short var_11 = (short)26840;
long long int var_12 = -7897230179708100506LL;
int var_13 = -253310474;
long long int var_14 = 8542222691131869192LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
