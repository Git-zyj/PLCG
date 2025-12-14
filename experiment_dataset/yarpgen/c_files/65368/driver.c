#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57405;
long long int var_1 = -3585980105245060200LL;
int var_2 = 1095040502;
unsigned long long int var_3 = 7807579001507938241ULL;
int var_5 = 330358838;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 15446105735211770933ULL;
int var_12 = 1194992503;
unsigned long long int var_13 = 13286084215134171919ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
