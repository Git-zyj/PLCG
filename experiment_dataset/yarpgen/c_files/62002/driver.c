#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
short var_3 = (short)-7027;
short var_4 = (short)-31747;
short var_5 = (short)8422;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)32499;
signed char var_12 = (signed char)51;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 13117543077450288398ULL;
long long int var_21 = 5554872986683332362LL;
signed char var_22 = (signed char)50;
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
