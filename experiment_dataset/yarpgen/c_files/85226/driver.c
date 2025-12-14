#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46856;
unsigned int var_2 = 83819633U;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)245;
short var_10 = (short)-7468;
int var_12 = -407417535;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)125;
int zero = 0;
long long int var_16 = 2126725773937909713LL;
unsigned char var_17 = (unsigned char)97;
unsigned long long int var_18 = 17333218234822276269ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
