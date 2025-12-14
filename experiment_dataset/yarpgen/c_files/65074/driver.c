#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)191;
unsigned char var_3 = (unsigned char)199;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)26;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)31;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-108;
signed char var_17 = (signed char)-64;
unsigned char var_18 = (unsigned char)16;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
