#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-38;
long long int var_4 = -2052732673918317922LL;
unsigned int var_10 = 1816138027U;
signed char var_11 = (signed char)127;
unsigned short var_16 = (unsigned short)49430;
int zero = 0;
unsigned char var_18 = (unsigned char)128;
unsigned short var_19 = (unsigned short)53866;
unsigned int var_20 = 3818829037U;
unsigned short var_21 = (unsigned short)17726;
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
