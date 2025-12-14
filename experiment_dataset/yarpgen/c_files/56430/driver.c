#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27460;
unsigned char var_2 = (unsigned char)211;
unsigned char var_4 = (unsigned char)151;
_Bool var_5 = (_Bool)0;
int var_7 = 942314423;
unsigned short var_8 = (unsigned short)24384;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 12288526184752822395ULL;
unsigned int var_13 = 35338191U;
int zero = 0;
unsigned short var_14 = (unsigned short)50984;
long long int var_15 = -4493828760822820508LL;
unsigned long long int var_16 = 18060990231823765175ULL;
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
