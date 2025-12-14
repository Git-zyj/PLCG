#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12377;
long long int var_1 = 8474463356069386058LL;
unsigned int var_3 = 3213428887U;
unsigned int var_5 = 3595011700U;
short var_6 = (short)28310;
unsigned int var_8 = 2513972592U;
long long int var_9 = -1725730277822685238LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 14834905577549224841ULL;
unsigned short var_15 = (unsigned short)26471;
int zero = 0;
unsigned short var_16 = (unsigned short)49402;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
