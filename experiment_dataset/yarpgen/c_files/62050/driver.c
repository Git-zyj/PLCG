#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
unsigned short var_1 = (unsigned short)15717;
int var_2 = 70228977;
unsigned int var_5 = 1056867680U;
unsigned long long int var_11 = 15233473673099678987ULL;
int zero = 0;
signed char var_14 = (signed char)-125;
unsigned char var_15 = (unsigned char)192;
unsigned int var_16 = 2810984828U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
