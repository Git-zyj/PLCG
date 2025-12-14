#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1325079261U;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-83;
unsigned short var_4 = (unsigned short)34449;
short var_5 = (short)4498;
unsigned char var_9 = (unsigned char)238;
long long int var_10 = 3959327672963547360LL;
unsigned long long int var_11 = 14258588425107390861ULL;
short var_12 = (short)20456;
long long int var_15 = 4178680924242172729LL;
int zero = 0;
unsigned int var_16 = 744609998U;
long long int var_17 = 6164645213173845832LL;
_Bool var_18 = (_Bool)0;
long long int var_19 = -4071826273421733159LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
