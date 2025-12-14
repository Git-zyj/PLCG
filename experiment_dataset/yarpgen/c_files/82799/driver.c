#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-87;
unsigned long long int var_7 = 2405749460950104575ULL;
unsigned char var_9 = (unsigned char)190;
signed char var_10 = (signed char)5;
unsigned char var_12 = (unsigned char)106;
int zero = 0;
unsigned short var_14 = (unsigned short)14557;
signed char var_15 = (signed char)74;
unsigned int var_16 = 3131436583U;
unsigned long long int var_17 = 7077918746931789508ULL;
unsigned short var_18 = (unsigned short)32137;
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
