#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 648188982;
long long int var_3 = -8455429335160244016LL;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)25140;
long long int var_12 = 4174192320964060807LL;
int zero = 0;
unsigned char var_14 = (unsigned char)13;
long long int var_15 = 5443800470941231849LL;
void init() {
}

void checksum() {
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
