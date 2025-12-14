#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4149665799260913996LL;
long long int var_1 = 500680638012236686LL;
unsigned char var_2 = (unsigned char)201;
long long int var_3 = -8115389257387906683LL;
unsigned char var_4 = (unsigned char)104;
signed char var_5 = (signed char)-84;
unsigned long long int var_6 = 3206619886189302968ULL;
short var_7 = (short)28666;
long long int var_8 = -8583739931455847924LL;
unsigned int var_9 = 2071513051U;
long long int var_10 = -7938453774045125453LL;
long long int var_11 = 2943332179465827384LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)199;
unsigned short var_14 = (unsigned short)46712;
void init() {
}

void checksum() {
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
