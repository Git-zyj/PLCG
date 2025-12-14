#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1021687135;
unsigned int var_5 = 11161852U;
unsigned long long int var_8 = 10226164212462139391ULL;
long long int var_10 = 3370135195210681994LL;
int var_11 = -11605610;
long long int var_12 = 7905849327771230661LL;
signed char var_14 = (signed char)-5;
short var_16 = (short)26454;
int zero = 0;
signed char var_17 = (signed char)77;
unsigned short var_18 = (unsigned short)43017;
signed char var_19 = (signed char)-37;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
