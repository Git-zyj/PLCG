#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7397445554189937557LL;
long long int var_9 = 7062970343085296015LL;
long long int var_11 = -5589439041093732900LL;
unsigned short var_18 = (unsigned short)13686;
int zero = 0;
short var_19 = (short)7902;
long long int var_20 = -3937235102840370345LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
