#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1184201723;
int var_5 = 1788755283;
unsigned short var_9 = (unsigned short)20989;
unsigned int var_11 = 917750929U;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = 3601332724936665593LL;
unsigned int var_15 = 1183352270U;
unsigned char var_16 = (unsigned char)62;
unsigned int var_17 = 4171940970U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
