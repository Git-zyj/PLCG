#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
unsigned int var_4 = 3662560587U;
unsigned short var_13 = (unsigned short)52519;
int zero = 0;
unsigned short var_18 = (unsigned short)40610;
unsigned char var_19 = (unsigned char)123;
unsigned short var_20 = (unsigned short)16542;
signed char var_21 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
