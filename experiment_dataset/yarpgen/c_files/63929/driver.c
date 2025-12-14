#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17558171937865915768ULL;
unsigned short var_3 = (unsigned short)18544;
int var_4 = 1036272280;
unsigned long long int var_5 = 4411252659973233684ULL;
signed char var_6 = (signed char)-82;
unsigned long long int var_10 = 5242874645122913671ULL;
int zero = 0;
unsigned int var_11 = 392442227U;
signed char var_12 = (signed char)-7;
int var_13 = 1845225934;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
