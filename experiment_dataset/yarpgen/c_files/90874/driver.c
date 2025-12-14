#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20686;
unsigned int var_1 = 3943411322U;
long long int var_3 = 8532731698877042405LL;
unsigned short var_4 = (unsigned short)19726;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 216556941U;
unsigned char var_12 = (unsigned char)2;
long long int var_13 = -3373867478607409702LL;
int var_16 = -626780923;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 15217394617377251114ULL;
long long int var_19 = -1350287799895748074LL;
long long int var_20 = 7936865085559402588LL;
void init() {
}

void checksum() {
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
