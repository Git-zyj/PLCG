#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -472501794;
unsigned char var_2 = (unsigned char)243;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)70;
signed char var_6 = (signed char)122;
int zero = 0;
short var_10 = (short)-25479;
unsigned char var_11 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
