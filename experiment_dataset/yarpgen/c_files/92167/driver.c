#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-46;
int var_1 = -726315872;
unsigned long long int var_2 = 2453647769817590211ULL;
unsigned long long int var_3 = 14085392549386552640ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 7608120755433613584ULL;
unsigned long long int var_8 = 13877073435372574826ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)62783;
signed char var_11 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
