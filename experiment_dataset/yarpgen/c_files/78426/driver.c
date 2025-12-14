#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1776319293U;
short var_3 = (short)-6632;
unsigned int var_7 = 3583230116U;
unsigned long long int var_9 = 10203366420466781133ULL;
long long int var_12 = -4182055178502898276LL;
_Bool var_17 = (_Bool)0;
signed char var_19 = (signed char)-81;
int zero = 0;
unsigned char var_20 = (unsigned char)247;
int var_21 = 666549025;
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
