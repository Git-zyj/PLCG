#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62473;
int var_1 = 223412623;
long long int var_2 = -7896637341391179357LL;
unsigned long long int var_5 = 15662587059144095917ULL;
int var_7 = 1209199808;
unsigned short var_8 = (unsigned short)64572;
int var_10 = -1405405776;
int zero = 0;
unsigned int var_14 = 1526965840U;
unsigned short var_15 = (unsigned short)6251;
long long int var_16 = 7398048467739777403LL;
int var_17 = 369957223;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
