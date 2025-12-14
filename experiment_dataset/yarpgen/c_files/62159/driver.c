#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11781245661309465510ULL;
unsigned short var_6 = (unsigned short)47251;
_Bool var_7 = (_Bool)1;
unsigned short var_11 = (unsigned short)7329;
int zero = 0;
short var_15 = (short)-12569;
unsigned short var_16 = (unsigned short)2127;
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
