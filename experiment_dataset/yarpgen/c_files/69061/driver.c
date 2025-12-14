#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39152;
signed char var_1 = (signed char)93;
int var_2 = -1656280713;
short var_4 = (short)19234;
_Bool var_5 = (_Bool)0;
int var_6 = 2049642354;
unsigned int var_7 = 2639624595U;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)1011;
short var_10 = (short)-21467;
short var_11 = (short)26383;
unsigned long long int var_12 = 16567269261343000266ULL;
long long int var_13 = -2584746932187580521LL;
unsigned short var_14 = (unsigned short)34897;
short var_16 = (short)-24042;
int zero = 0;
short var_17 = (short)-15455;
int var_18 = -2076737636;
unsigned short var_19 = (unsigned short)14118;
unsigned int var_20 = 1125297825U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
