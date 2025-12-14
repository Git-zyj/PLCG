#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1027153599;
unsigned long long int var_7 = 17318393666485362864ULL;
long long int var_8 = 8998025110312311163LL;
int var_9 = 2032909410;
short var_10 = (short)-252;
unsigned long long int var_12 = 14515450054112438629ULL;
unsigned int var_14 = 4111386944U;
int zero = 0;
unsigned int var_19 = 3157253717U;
unsigned short var_20 = (unsigned short)19156;
unsigned int var_21 = 2271327404U;
unsigned short var_22 = (unsigned short)28028;
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
