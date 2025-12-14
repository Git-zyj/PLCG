#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-94;
unsigned char var_4 = (unsigned char)42;
_Bool var_6 = (_Bool)0;
int var_7 = 142729112;
unsigned long long int var_12 = 9637329950925371289ULL;
int zero = 0;
short var_15 = (short)-25554;
unsigned short var_16 = (unsigned short)35125;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
