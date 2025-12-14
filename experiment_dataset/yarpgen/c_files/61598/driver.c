#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3714057133813217870LL;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)10;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 10268225880262892153ULL;
void init() {
}

void checksum() {
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
