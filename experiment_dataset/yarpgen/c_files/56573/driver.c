#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)45;
long long int var_7 = -3136247339221918602LL;
unsigned long long int var_9 = 400770265973706805ULL;
unsigned short var_11 = (unsigned short)29920;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 7392582925899066626LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
