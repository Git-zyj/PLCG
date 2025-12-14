#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2396954527U;
int var_7 = 300099465;
unsigned long long int var_9 = 17302274772065875673ULL;
unsigned int var_10 = 3272855690U;
_Bool var_12 = (_Bool)1;
short var_13 = (short)15812;
unsigned int var_16 = 1394767465U;
short var_18 = (short)-14977;
int zero = 0;
unsigned long long int var_19 = 11805166824541118398ULL;
long long int var_20 = -6920150208207201543LL;
unsigned long long int var_21 = 6365275447284701027ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
