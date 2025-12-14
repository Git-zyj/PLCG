#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4198081849U;
unsigned long long int var_6 = 9684427065417575768ULL;
short var_7 = (short)-23580;
short var_13 = (short)-3373;
signed char var_16 = (signed char)83;
unsigned short var_19 = (unsigned short)40451;
int zero = 0;
unsigned char var_20 = (unsigned char)215;
unsigned char var_21 = (unsigned char)3;
void init() {
}

void checksum() {
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
