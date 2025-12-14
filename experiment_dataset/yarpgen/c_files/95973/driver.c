#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7847;
short var_4 = (short)-5487;
unsigned int var_6 = 2071671351U;
signed char var_7 = (signed char)-54;
int var_8 = 1799549848;
signed char var_12 = (signed char)26;
signed char var_13 = (signed char)119;
unsigned long long int var_14 = 35044686488332944ULL;
unsigned long long int var_15 = 15085148039204147531ULL;
unsigned long long int var_16 = 15829776417377870779ULL;
unsigned int var_17 = 264482260U;
int zero = 0;
unsigned short var_19 = (unsigned short)42732;
signed char var_20 = (signed char)-4;
signed char var_21 = (signed char)-93;
void init() {
}

void checksum() {
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
