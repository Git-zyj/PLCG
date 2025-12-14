#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_3 = (short)9866;
_Bool var_4 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)35857;
unsigned long long int var_12 = 12359908508589970584ULL;
unsigned short var_17 = (unsigned short)18607;
unsigned char var_18 = (unsigned char)57;
int zero = 0;
unsigned char var_19 = (unsigned char)78;
unsigned long long int var_20 = 8880618747594584854ULL;
short var_21 = (short)-28101;
short var_22 = (short)27024;
signed char var_23 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
