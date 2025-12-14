#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2381484022U;
unsigned int var_8 = 681341339U;
short var_9 = (short)-4726;
long long int var_11 = 5738704707893802212LL;
signed char var_14 = (signed char)17;
unsigned char var_17 = (unsigned char)36;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = 1795491351018394785LL;
long long int var_21 = -3814450570012731563LL;
unsigned int var_22 = 126607385U;
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
