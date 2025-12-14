#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9384287855541369060ULL;
unsigned long long int var_7 = 12285385836397146869ULL;
unsigned char var_10 = (unsigned char)30;
unsigned int var_11 = 3528338864U;
unsigned char var_12 = (unsigned char)94;
unsigned char var_14 = (unsigned char)245;
short var_15 = (short)15351;
int var_16 = 1046625213;
int zero = 0;
long long int var_17 = 511282587781089107LL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-79;
unsigned long long int var_20 = 12878203291686321732ULL;
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
