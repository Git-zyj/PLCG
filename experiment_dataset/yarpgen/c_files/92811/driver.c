#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40457;
int var_3 = 1386145050;
unsigned char var_4 = (unsigned char)121;
_Bool var_5 = (_Bool)1;
unsigned char var_11 = (unsigned char)84;
unsigned char var_12 = (unsigned char)243;
int zero = 0;
int var_14 = 637645079;
unsigned long long int var_15 = 8247705047391618638ULL;
int var_16 = -70647285;
signed char var_17 = (signed char)112;
int var_18 = 1717518707;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
