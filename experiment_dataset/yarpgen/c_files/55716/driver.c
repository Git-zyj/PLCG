#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24202;
unsigned char var_3 = (unsigned char)222;
signed char var_4 = (signed char)-33;
int var_6 = 920178000;
unsigned long long int var_10 = 15358222090401520515ULL;
unsigned long long int var_11 = 9989779758160950978ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)84;
unsigned long long int var_14 = 2299816221637463694ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
