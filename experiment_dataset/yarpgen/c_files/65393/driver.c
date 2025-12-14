#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)199;
int var_3 = -1215426579;
unsigned int var_4 = 2404794959U;
signed char var_7 = (signed char)-90;
unsigned char var_12 = (unsigned char)18;
unsigned int var_17 = 2466167908U;
signed char var_18 = (signed char)-19;
int zero = 0;
unsigned char var_19 = (unsigned char)248;
unsigned long long int var_20 = 16662780085476318292ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
