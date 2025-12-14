#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12473670768063854217ULL;
unsigned long long int var_3 = 15457541482934110522ULL;
unsigned long long int var_4 = 18406855993897539255ULL;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-31491;
int zero = 0;
unsigned int var_10 = 3651006673U;
long long int var_11 = -6640029388002164967LL;
short var_12 = (short)3959;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
