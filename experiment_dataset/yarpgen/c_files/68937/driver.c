#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46323;
unsigned int var_4 = 496046303U;
unsigned char var_5 = (unsigned char)212;
unsigned char var_8 = (unsigned char)6;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)-54;
unsigned int var_15 = 308680518U;
int zero = 0;
short var_17 = (short)-28179;
short var_18 = (short)-25112;
unsigned int var_19 = 1929444451U;
int var_20 = 1853324890;
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
