#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10561039782197737389ULL;
signed char var_4 = (signed char)-79;
short var_5 = (short)-27075;
unsigned char var_10 = (unsigned char)148;
int zero = 0;
signed char var_14 = (signed char)-101;
int var_15 = -406654271;
void init() {
}

void checksum() {
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
