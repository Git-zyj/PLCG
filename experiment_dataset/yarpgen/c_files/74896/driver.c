#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 858137743;
unsigned int var_5 = 168499137U;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)52660;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = 167572587;
unsigned int var_17 = 4178109829U;
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
