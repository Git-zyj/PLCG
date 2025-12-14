#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25196;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)18;
unsigned int var_10 = 2184751963U;
signed char var_11 = (signed char)-76;
unsigned int var_13 = 3159324173U;
int var_14 = 485858888;
unsigned char var_15 = (unsigned char)176;
int zero = 0;
int var_16 = -688100835;
long long int var_17 = 8661178589644229100LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
