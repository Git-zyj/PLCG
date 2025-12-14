#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21980;
int var_1 = 1430587088;
signed char var_4 = (signed char)-126;
short var_8 = (short)27188;
long long int var_9 = -7668487338623400088LL;
_Bool var_10 = (_Bool)0;
long long int var_11 = 3775094724229598915LL;
int zero = 0;
unsigned short var_13 = (unsigned short)51353;
unsigned int var_14 = 3162262213U;
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
