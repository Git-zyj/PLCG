#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)11600;
short var_9 = (short)-30283;
_Bool var_10 = (_Bool)1;
unsigned char var_14 = (unsigned char)81;
int zero = 0;
signed char var_17 = (signed char)-86;
short var_18 = (short)15074;
unsigned char var_19 = (unsigned char)22;
int var_20 = 564419083;
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
