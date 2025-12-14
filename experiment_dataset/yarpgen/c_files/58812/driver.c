#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2511921465U;
int var_6 = -531252852;
unsigned long long int var_11 = 8210115149738068417ULL;
int zero = 0;
unsigned long long int var_15 = 15774080289915506065ULL;
short var_16 = (short)-12519;
signed char var_17 = (signed char)-16;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
