#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1414031080U;
signed char var_3 = (signed char)95;
short var_4 = (short)23116;
signed char var_6 = (signed char)110;
unsigned int var_7 = 1688680319U;
_Bool var_8 = (_Bool)1;
short var_10 = (short)20648;
unsigned short var_11 = (unsigned short)27976;
long long int var_13 = 4088347503597706624LL;
int zero = 0;
unsigned short var_15 = (unsigned short)16624;
long long int var_16 = 990099600335841058LL;
long long int var_17 = -633208862531278036LL;
long long int var_18 = 1978085270828830792LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
