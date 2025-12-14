#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
int var_2 = 571057714;
unsigned short var_3 = (unsigned short)48716;
int var_8 = 795394708;
signed char var_11 = (signed char)45;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_15 = 2080473418;
signed char var_16 = (signed char)52;
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
