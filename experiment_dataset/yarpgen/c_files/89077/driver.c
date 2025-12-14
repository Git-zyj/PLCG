#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_10 = 4837604541085578769LL;
long long int var_11 = -4041594224299080463LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 9853950979530297494ULL;
unsigned long long int var_22 = 10797581800015746878ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
