#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)243;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)56796;
short var_16 = (short)28351;
unsigned long long int var_17 = 3349738098463958510ULL;
unsigned char var_19 = (unsigned char)111;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 3493644298438160560ULL;
unsigned short var_22 = (unsigned short)35977;
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
