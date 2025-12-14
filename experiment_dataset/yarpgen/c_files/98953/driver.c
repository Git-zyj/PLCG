#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2276481374998225441LL;
unsigned long long int var_6 = 16130743126855276260ULL;
unsigned long long int var_8 = 862283651497438071ULL;
signed char var_9 = (signed char)94;
unsigned long long int var_10 = 12751963304572216994ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 230866237U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
