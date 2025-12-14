#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 94760843;
unsigned int var_2 = 3808858999U;
short var_4 = (short)19730;
unsigned char var_8 = (unsigned char)194;
short var_11 = (short)26820;
long long int var_13 = -1656550182523011321LL;
long long int var_15 = 6460400079283827647LL;
unsigned int var_16 = 4015682891U;
int zero = 0;
unsigned short var_17 = (unsigned short)44433;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
