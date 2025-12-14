#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6464737737574215852LL;
long long int var_1 = -9080878687674071383LL;
long long int var_2 = -7585203224613105639LL;
unsigned char var_4 = (unsigned char)213;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)22908;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)28399;
unsigned long long int var_11 = 6177354673975424474ULL;
long long int var_13 = -156670387765794760LL;
unsigned short var_14 = (unsigned short)47054;
unsigned int var_15 = 326326712U;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2483705376U;
unsigned long long int var_20 = 16112839126740247024ULL;
short var_21 = (short)30376;
unsigned long long int var_22 = 6990133575393523738ULL;
unsigned short var_23 = (unsigned short)49177;
unsigned int var_24 = 2302102850U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
