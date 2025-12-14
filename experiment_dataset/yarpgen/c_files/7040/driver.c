#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2241684245U;
short var_1 = (short)22890;
signed char var_2 = (signed char)-42;
signed char var_5 = (signed char)5;
short var_6 = (short)11415;
unsigned int var_8 = 2360741360U;
unsigned int var_10 = 2249855477U;
signed char var_11 = (signed char)103;
int zero = 0;
signed char var_13 = (signed char)67;
unsigned char var_14 = (unsigned char)42;
signed char var_15 = (signed char)-113;
signed char var_16 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
