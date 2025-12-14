#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3745;
int var_5 = -1345204222;
short var_6 = (short)-12685;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 4618516005099782605ULL;
short var_15 = (short)-25533;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)-22490;
signed char var_21 = (signed char)-55;
short var_22 = (short)-17187;
signed char var_23 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
