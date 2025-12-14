#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_5 = (short)13995;
unsigned char var_8 = (unsigned char)232;
signed char var_9 = (signed char)-37;
unsigned char var_16 = (unsigned char)26;
int zero = 0;
signed char var_18 = (signed char)81;
unsigned char var_19 = (unsigned char)135;
short var_20 = (short)17121;
short var_21 = (short)17020;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
