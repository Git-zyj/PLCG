#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)244;
short var_4 = (short)-25806;
signed char var_12 = (signed char)-104;
int zero = 0;
long long int var_17 = 7931897210930096320LL;
int var_18 = 1675418062;
unsigned short var_19 = (unsigned short)54212;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
