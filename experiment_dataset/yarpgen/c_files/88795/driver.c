#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1770142472;
int var_1 = -2116795977;
unsigned long long int var_2 = 9038867615929140557ULL;
int var_3 = -788666817;
short var_4 = (short)-12890;
int var_5 = -1173340909;
short var_6 = (short)-24232;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)17046;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 3362501145U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
