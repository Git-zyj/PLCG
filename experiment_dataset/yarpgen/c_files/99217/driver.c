#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11426669395803872006ULL;
signed char var_5 = (signed char)4;
unsigned long long int var_8 = 2436668989193616239ULL;
signed char var_10 = (signed char)-8;
unsigned char var_11 = (unsigned char)158;
unsigned int var_12 = 2646628910U;
signed char var_14 = (signed char)-40;
unsigned int var_15 = 4011541755U;
unsigned int var_16 = 2579328661U;
signed char var_18 = (signed char)120;
int zero = 0;
short var_20 = (short)27037;
signed char var_21 = (signed char)-79;
signed char var_22 = (signed char)-60;
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
