#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1125803874U;
unsigned char var_5 = (unsigned char)176;
short var_6 = (short)1624;
long long int var_9 = 74726948986338391LL;
unsigned int var_10 = 1771412079U;
int var_11 = -1159584319;
unsigned char var_15 = (unsigned char)81;
unsigned int var_17 = 2143365065U;
int zero = 0;
int var_18 = -875494397;
int var_19 = 1939144035;
short var_20 = (short)3124;
unsigned long long int var_21 = 13530884920966748619ULL;
unsigned int var_22 = 3856732871U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
