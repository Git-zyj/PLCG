#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
long long int var_1 = -6245743794072577418LL;
unsigned char var_3 = (unsigned char)230;
_Bool var_6 = (_Bool)1;
long long int var_7 = -5452826667413813452LL;
signed char var_8 = (signed char)100;
unsigned int var_9 = 2017394729U;
_Bool var_13 = (_Bool)0;
unsigned short var_16 = (unsigned short)9702;
short var_19 = (short)-25942;
int zero = 0;
unsigned long long int var_20 = 7448592884912201446ULL;
signed char var_21 = (signed char)-14;
unsigned char var_22 = (unsigned char)183;
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
