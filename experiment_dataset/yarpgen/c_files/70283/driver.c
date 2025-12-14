#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
long long int var_1 = -2383940712533703158LL;
unsigned char var_2 = (unsigned char)20;
long long int var_3 = -3690270627009428086LL;
unsigned int var_5 = 1230846892U;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-13752;
unsigned long long int var_10 = 2044814178537541850ULL;
short var_13 = (short)-27257;
unsigned long long int var_14 = 2451135258662678889ULL;
unsigned char var_15 = (unsigned char)191;
int var_17 = 384825587;
unsigned char var_18 = (unsigned char)156;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)253;
unsigned short var_21 = (unsigned short)55898;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
