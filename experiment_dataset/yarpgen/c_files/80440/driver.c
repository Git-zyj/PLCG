#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4926517077965421455LL;
unsigned long long int var_4 = 4222681780084511589ULL;
unsigned long long int var_6 = 9888885446981241352ULL;
unsigned int var_9 = 2677891072U;
short var_10 = (short)22549;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_16 = (short)-21307;
unsigned short var_17 = (unsigned short)4750;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3649070678U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
