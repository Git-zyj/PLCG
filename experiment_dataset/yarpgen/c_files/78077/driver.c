#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 2279908035609899505LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 14452653461673085267ULL;
unsigned long long int var_5 = 7184025244350185908ULL;
unsigned int var_6 = 1290216841U;
_Bool var_7 = (_Bool)0;
int var_8 = -1039328963;
unsigned int var_9 = 2442983475U;
short var_11 = (short)1693;
int zero = 0;
int var_13 = -335210733;
unsigned long long int var_14 = 1067138358125045924ULL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 3756738338054856412ULL;
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
