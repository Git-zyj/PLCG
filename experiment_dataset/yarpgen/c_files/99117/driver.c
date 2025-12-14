#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1741730514U;
_Bool var_6 = (_Bool)0;
long long int var_7 = 297006539431440583LL;
int zero = 0;
unsigned int var_10 = 3545943685U;
long long int var_11 = -8991692007093873248LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
