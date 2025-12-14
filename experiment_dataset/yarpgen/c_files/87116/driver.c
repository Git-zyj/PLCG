#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2620633929U;
unsigned int var_2 = 898148657U;
signed char var_5 = (signed char)-103;
unsigned int var_7 = 1649829124U;
int var_8 = -1690473785;
unsigned short var_11 = (unsigned short)11286;
unsigned int var_12 = 2649839111U;
unsigned int var_13 = 1964810829U;
int zero = 0;
unsigned long long int var_14 = 13415520275229422357ULL;
signed char var_15 = (signed char)-59;
signed char var_16 = (signed char)40;
short var_17 = (short)12256;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
