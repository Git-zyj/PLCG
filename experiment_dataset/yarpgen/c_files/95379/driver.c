#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1415;
signed char var_1 = (signed char)-82;
unsigned long long int var_6 = 17907645966953743399ULL;
unsigned char var_10 = (unsigned char)68;
int var_12 = 1072936259;
long long int var_17 = -6306703998638793188LL;
short var_19 = (short)-29936;
int zero = 0;
signed char var_20 = (signed char)30;
short var_21 = (short)25072;
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
