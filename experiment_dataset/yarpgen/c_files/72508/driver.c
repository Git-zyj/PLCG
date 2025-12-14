#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
unsigned int var_1 = 2207314241U;
long long int var_2 = 6690874523679270242LL;
unsigned char var_4 = (unsigned char)13;
_Bool var_5 = (_Bool)1;
short var_8 = (short)14765;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 367516617874723093LL;
int var_12 = -604817510;
short var_13 = (short)7375;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
