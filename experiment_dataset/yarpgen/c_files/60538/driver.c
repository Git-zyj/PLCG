#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_13 = (signed char)-87;
signed char var_14 = (signed char)-81;
unsigned char var_16 = (unsigned char)202;
signed char var_18 = (signed char)109;
int zero = 0;
unsigned char var_20 = (unsigned char)223;
unsigned long long int var_21 = 14989963243091108161ULL;
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
