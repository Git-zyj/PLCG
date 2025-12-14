#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)186;
_Bool var_4 = (_Bool)1;
unsigned int var_9 = 519403812U;
signed char var_10 = (signed char)-121;
int zero = 0;
unsigned int var_11 = 1434920742U;
long long int var_12 = -5027138822430916160LL;
void init() {
}

void checksum() {
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
