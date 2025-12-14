#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2081404312;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_14 = -212823638;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_19 = 89823291;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
