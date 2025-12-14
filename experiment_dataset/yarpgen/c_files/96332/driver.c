#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)178;
short var_1 = (short)10282;
short var_2 = (short)-19608;
int var_3 = -1600256732;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)9832;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 1949565503U;
int zero = 0;
int var_10 = -39668372;
signed char var_11 = (signed char)84;
int var_12 = 1418974089;
unsigned short var_13 = (unsigned short)31772;
int var_14 = 1708726081;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
