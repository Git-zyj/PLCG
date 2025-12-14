#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5126;
long long int var_1 = 2134742104994659514LL;
unsigned short var_2 = (unsigned short)25888;
unsigned int var_3 = 2325832789U;
long long int var_9 = -8916691744992192729LL;
short var_13 = (short)-28881;
int zero = 0;
short var_14 = (short)-32626;
unsigned long long int var_15 = 13106886497351657246ULL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 12377079354563413536ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
