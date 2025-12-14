#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17325298616838477757ULL;
signed char var_4 = (signed char)-35;
short var_10 = (short)-8884;
unsigned short var_12 = (unsigned short)10143;
int zero = 0;
signed char var_13 = (signed char)99;
unsigned long long int var_14 = 7387662425884497298ULL;
signed char var_15 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
