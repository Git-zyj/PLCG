#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 880154511;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 18131772864558483767ULL;
unsigned long long int var_8 = 3595644621319255893ULL;
int var_9 = 2112687577;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)69;
unsigned short var_13 = (unsigned short)16082;
unsigned int var_14 = 1695873361U;
int zero = 0;
int var_15 = -1722386705;
_Bool var_16 = (_Bool)0;
short var_17 = (short)15828;
int var_18 = -1721330622;
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
