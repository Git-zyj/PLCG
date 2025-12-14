#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 64541643;
unsigned char var_2 = (unsigned char)49;
long long int var_5 = 6766093084233693005LL;
int var_6 = -637943686;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-22218;
unsigned long long int var_9 = 15676978015027264016ULL;
unsigned char var_12 = (unsigned char)51;
int zero = 0;
unsigned char var_14 = (unsigned char)194;
unsigned short var_15 = (unsigned short)59820;
unsigned char var_16 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
