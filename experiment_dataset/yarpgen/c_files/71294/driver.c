#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
unsigned char var_1 = (unsigned char)250;
short var_2 = (short)-12640;
short var_3 = (short)-18605;
int var_4 = 577208977;
unsigned int var_5 = 3695972873U;
_Bool var_6 = (_Bool)0;
int var_7 = 662484992;
signed char var_11 = (signed char)1;
int zero = 0;
signed char var_12 = (signed char)-26;
unsigned long long int var_13 = 8696079878578686616ULL;
long long int var_14 = 2118851876934857082LL;
unsigned short var_15 = (unsigned short)65507;
unsigned int var_16 = 3718074441U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
