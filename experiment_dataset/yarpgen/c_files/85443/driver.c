#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13834;
long long int var_1 = -552928936549755403LL;
short var_3 = (short)-6947;
unsigned int var_5 = 724192765U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1140020791U;
short var_10 = (short)3564;
unsigned int var_11 = 79252028U;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 17961300282736807266ULL;
short var_17 = (short)-31821;
unsigned char var_18 = (unsigned char)163;
unsigned long long int var_19 = 18068000978561866144ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
