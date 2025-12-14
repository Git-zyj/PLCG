#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)26185;
unsigned char var_5 = (unsigned char)29;
short var_6 = (short)7414;
int var_11 = 1360745150;
short var_12 = (short)-3970;
short var_14 = (short)-11213;
short var_16 = (short)17299;
int var_19 = -2062504192;
int zero = 0;
short var_20 = (short)-16646;
unsigned int var_21 = 2344143580U;
unsigned long long int var_22 = 511062213815145281ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
