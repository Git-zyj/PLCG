#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)2;
unsigned char var_2 = (unsigned char)96;
unsigned short var_3 = (unsigned short)49827;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)87;
short var_8 = (short)26910;
short var_9 = (short)-2676;
short var_10 = (short)2952;
unsigned short var_13 = (unsigned short)4519;
signed char var_14 = (signed char)-12;
int zero = 0;
unsigned short var_16 = (unsigned short)34794;
unsigned int var_17 = 4001347845U;
unsigned short var_18 = (unsigned short)43043;
long long int var_19 = -3815238594959652486LL;
signed char var_20 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
