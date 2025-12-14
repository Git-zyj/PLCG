#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 807920780;
signed char var_1 = (signed char)94;
long long int var_2 = 1074444349223541516LL;
int var_6 = 29281495;
_Bool var_7 = (_Bool)1;
int var_8 = 1606121982;
unsigned short var_9 = (unsigned short)44019;
signed char var_13 = (signed char)-1;
int zero = 0;
signed char var_15 = (signed char)-9;
unsigned int var_16 = 143567367U;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 1820795133149047951LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
