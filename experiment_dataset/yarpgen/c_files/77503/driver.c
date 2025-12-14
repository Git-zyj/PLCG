#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1593897237U;
unsigned int var_7 = 3745379237U;
unsigned long long int var_16 = 8258903986134705639ULL;
int zero = 0;
int var_20 = 1399280524;
long long int var_21 = -9099863109791643463LL;
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
