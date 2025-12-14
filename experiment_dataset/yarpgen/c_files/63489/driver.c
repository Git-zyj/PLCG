#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1673503120;
short var_3 = (short)-8632;
unsigned short var_5 = (unsigned short)13753;
_Bool var_6 = (_Bool)1;
int var_7 = -1198170402;
long long int var_8 = 4227321820637357316LL;
int var_9 = -2116174698;
int zero = 0;
long long int var_12 = -6782545915826236296LL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-22372;
unsigned char var_15 = (unsigned char)36;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
