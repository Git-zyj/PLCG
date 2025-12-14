#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_5 = 753209349U;
int var_6 = 1106833233;
unsigned char var_8 = (unsigned char)163;
int var_9 = -692164686;
int zero = 0;
signed char var_20 = (signed char)-113;
long long int var_21 = -1304034461951010182LL;
unsigned long long int var_22 = 5151180705274421543ULL;
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
