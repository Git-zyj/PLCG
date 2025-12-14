#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6452713297350452871ULL;
unsigned long long int var_2 = 4331225616778346476ULL;
unsigned long long int var_3 = 3639830574135065558ULL;
unsigned char var_4 = (unsigned char)244;
unsigned char var_6 = (unsigned char)202;
long long int var_7 = 2928748726325405396LL;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-20104;
long long int var_12 = -4569001412203920778LL;
int zero = 0;
int var_13 = -1578464576;
short var_14 = (short)21868;
short var_15 = (short)-13916;
short var_16 = (short)-28523;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
