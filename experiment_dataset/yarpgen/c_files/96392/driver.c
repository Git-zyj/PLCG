#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-59;
unsigned char var_2 = (unsigned char)9;
unsigned long long int var_3 = 569260498931830309ULL;
signed char var_4 = (signed char)51;
unsigned char var_5 = (unsigned char)90;
unsigned int var_6 = 3725563761U;
unsigned char var_9 = (unsigned char)172;
signed char var_11 = (signed char)8;
signed char var_13 = (signed char)-80;
int zero = 0;
signed char var_14 = (signed char)18;
short var_15 = (short)6679;
signed char var_16 = (signed char)-103;
unsigned char var_17 = (unsigned char)24;
unsigned long long int var_18 = 3841397386613272721ULL;
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
