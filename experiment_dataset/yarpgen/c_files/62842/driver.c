#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
long long int var_2 = 7662186744429850092LL;
signed char var_3 = (signed char)-112;
unsigned short var_6 = (unsigned short)9616;
unsigned int var_7 = 406680016U;
short var_8 = (short)2845;
unsigned int var_13 = 1275203780U;
signed char var_14 = (signed char)-113;
signed char var_15 = (signed char)78;
long long int var_16 = -6658478957758023407LL;
int var_19 = -425134286;
int zero = 0;
short var_20 = (short)8357;
long long int var_21 = -1714229366890101743LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
