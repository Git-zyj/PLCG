#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61551;
unsigned long long int var_3 = 4168399302731816942ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 1895055984U;
unsigned short var_8 = (unsigned short)48651;
short var_9 = (short)29823;
unsigned int var_10 = 3922912860U;
long long int var_12 = 6837451336900458821LL;
int zero = 0;
unsigned long long int var_13 = 5343788965659250713ULL;
short var_14 = (short)-4489;
short var_15 = (short)-4449;
void init() {
}

void checksum() {
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
