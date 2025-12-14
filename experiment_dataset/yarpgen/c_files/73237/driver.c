#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 628434408;
int var_1 = 443334677;
_Bool var_2 = (_Bool)0;
int var_3 = 130604559;
unsigned char var_4 = (unsigned char)168;
unsigned long long int var_6 = 18438638368724039188ULL;
long long int var_8 = -8158017380231921784LL;
signed char var_11 = (signed char)-3;
long long int var_12 = 7886645746648710633LL;
unsigned char var_16 = (unsigned char)1;
int zero = 0;
short var_17 = (short)4004;
short var_18 = (short)-24175;
signed char var_19 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
