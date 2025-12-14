#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
int var_2 = 2065407181;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 1015092488U;
short var_11 = (short)16713;
signed char var_12 = (signed char)117;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-25544;
short var_18 = (short)27199;
signed char var_19 = (signed char)-21;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
