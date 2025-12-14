#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)1;
unsigned char var_2 = (unsigned char)237;
long long int var_3 = 1667682575006620855LL;
_Bool var_5 = (_Bool)1;
int var_7 = -242544893;
unsigned long long int var_11 = 3633449521996194538ULL;
unsigned char var_15 = (unsigned char)49;
unsigned long long int var_16 = 15510622990275894774ULL;
int zero = 0;
signed char var_17 = (signed char)13;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
