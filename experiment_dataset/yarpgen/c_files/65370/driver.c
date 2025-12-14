#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7867494607709285165LL;
short var_1 = (short)14481;
long long int var_2 = -4260888150581891752LL;
long long int var_4 = -2272357621709262855LL;
unsigned char var_8 = (unsigned char)233;
signed char var_9 = (signed char)-39;
unsigned char var_10 = (unsigned char)213;
unsigned long long int var_12 = 13415020925490880466ULL;
signed char var_13 = (signed char)-67;
int zero = 0;
long long int var_14 = 5197102347682912471LL;
signed char var_15 = (signed char)-89;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
