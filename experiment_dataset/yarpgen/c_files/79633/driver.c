#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 315897321;
unsigned long long int var_2 = 4290716740078630422ULL;
unsigned char var_4 = (unsigned char)67;
long long int var_6 = -739401803892897870LL;
unsigned long long int var_11 = 6432897085492516645ULL;
unsigned long long int var_14 = 12113071134672927219ULL;
unsigned long long int var_15 = 4606684023272186854ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)40;
unsigned short var_17 = (unsigned short)43774;
void init() {
}

void checksum() {
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
