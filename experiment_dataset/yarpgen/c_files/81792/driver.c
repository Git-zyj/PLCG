#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19351;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 933287366U;
unsigned char var_7 = (unsigned char)76;
int zero = 0;
unsigned short var_17 = (unsigned short)50583;
unsigned char var_18 = (unsigned char)34;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
