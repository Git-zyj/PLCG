#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22270;
long long int var_2 = -5812156746591478621LL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 724757843U;
unsigned char var_6 = (unsigned char)129;
int var_7 = 1147742543;
int var_8 = 1066166402;
int var_9 = -454622714;
int zero = 0;
unsigned short var_10 = (unsigned short)9035;
unsigned char var_11 = (unsigned char)241;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
