#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 3607932212537643807ULL;
int var_2 = -1510390428;
long long int var_3 = 2552487076391400847LL;
short var_7 = (short)12931;
short var_10 = (short)16733;
long long int var_11 = -6712865608695446438LL;
short var_14 = (short)6487;
long long int var_15 = -7807422604723793933LL;
int var_16 = -1970254035;
signed char var_17 = (signed char)77;
int zero = 0;
short var_19 = (short)-20268;
unsigned int var_20 = 1104504584U;
unsigned char var_21 = (unsigned char)205;
signed char var_22 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
