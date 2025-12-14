#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)19;
_Bool var_4 = (_Bool)1;
unsigned short var_17 = (unsigned short)10670;
int zero = 0;
int var_19 = -932084824;
long long int var_20 = -3759969944329320259LL;
long long int var_21 = 3907496574136115946LL;
void init() {
}

void checksum() {
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
