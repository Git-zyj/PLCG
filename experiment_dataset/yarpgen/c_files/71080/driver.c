#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3829396868U;
unsigned short var_1 = (unsigned short)54550;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 2816018024U;
unsigned int var_8 = 179167305U;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)180;
long long int var_12 = 8883871864888482094LL;
short var_14 = (short)-7526;
int zero = 0;
unsigned long long int var_16 = 16321162817396479078ULL;
signed char var_17 = (signed char)-62;
unsigned long long int var_18 = 13345310711524999018ULL;
unsigned int var_19 = 1804899503U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
