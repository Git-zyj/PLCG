#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)20353;
unsigned char var_3 = (unsigned char)237;
unsigned int var_6 = 3455426153U;
unsigned short var_9 = (unsigned short)26952;
int var_10 = 730304788;
unsigned char var_16 = (unsigned char)174;
short var_18 = (short)-1144;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)26695;
long long int var_21 = 7199146617148659594LL;
unsigned int var_22 = 3347476519U;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
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
