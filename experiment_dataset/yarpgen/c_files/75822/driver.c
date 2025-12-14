#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)74;
long long int var_9 = -809819660202267709LL;
signed char var_11 = (signed char)68;
_Bool var_12 = (_Bool)1;
unsigned long long int var_15 = 6874153409523509612ULL;
long long int var_16 = -6274320242225073361LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
long long int var_22 = -1635897940412102155LL;
unsigned char var_23 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
