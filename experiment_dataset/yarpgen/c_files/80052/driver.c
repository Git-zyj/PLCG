#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1296686247U;
long long int var_4 = 1213085010849065253LL;
unsigned short var_5 = (unsigned short)52026;
short var_7 = (short)-30555;
int var_8 = 1657548584;
long long int var_14 = 9042313285503353435LL;
int zero = 0;
unsigned long long int var_15 = 993202264068432827ULL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
