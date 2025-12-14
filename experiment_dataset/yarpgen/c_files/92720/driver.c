#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 2948531224803633861ULL;
_Bool var_6 = (_Bool)0;
short var_9 = (short)2384;
unsigned long long int var_14 = 14720287923852568122ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 2844067728258723029ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)44128;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2659798921U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
