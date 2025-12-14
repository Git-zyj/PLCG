#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 174029389775466917ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2607387399U;
short var_6 = (short)-32527;
long long int var_8 = -3326811441737285476LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 7788405323770149138LL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-22394;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
