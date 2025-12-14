#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)35866;
unsigned long long int var_5 = 4794653774988292395ULL;
int var_8 = -1064034080;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)17;
unsigned char var_17 = (unsigned char)89;
unsigned int var_18 = 442164564U;
int var_19 = -1321075158;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)30891;
long long int var_22 = -8338674843392836951LL;
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
