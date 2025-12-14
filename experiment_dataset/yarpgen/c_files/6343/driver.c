#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4279907485113768998LL;
long long int var_3 = 4142182726898673604LL;
int var_5 = -663010181;
unsigned short var_6 = (unsigned short)50432;
_Bool var_10 = (_Bool)1;
short var_13 = (short)-1932;
unsigned int var_15 = 2046803218U;
short var_16 = (short)22388;
int zero = 0;
short var_19 = (short)-29160;
long long int var_20 = 8662782578844175340LL;
signed char var_21 = (signed char)-109;
long long int var_22 = 4571943790569083390LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
