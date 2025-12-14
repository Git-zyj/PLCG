#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3735285326U;
unsigned short var_2 = (unsigned short)44929;
long long int var_5 = 7754205895617047825LL;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)65;
long long int var_14 = -1404760287772364356LL;
unsigned int var_17 = 1853108750U;
unsigned long long int var_19 = 650466589721957248ULL;
int zero = 0;
short var_20 = (short)13034;
_Bool var_21 = (_Bool)1;
int var_22 = -1802379549;
signed char var_23 = (signed char)70;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
