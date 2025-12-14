#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -372757999;
int var_3 = 480472236;
signed char var_4 = (signed char)73;
unsigned short var_5 = (unsigned short)22665;
unsigned short var_6 = (unsigned short)19912;
unsigned short var_7 = (unsigned short)59686;
short var_9 = (short)-18662;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-19316;
unsigned int var_12 = 3101271072U;
int zero = 0;
long long int var_13 = -3004259070461777879LL;
unsigned char var_14 = (unsigned char)41;
_Bool var_15 = (_Bool)1;
long long int var_16 = 420281887732916371LL;
void init() {
}

void checksum() {
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
