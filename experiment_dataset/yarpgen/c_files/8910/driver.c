#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20092;
signed char var_1 = (signed char)-22;
short var_3 = (short)9579;
short var_5 = (short)-27424;
signed char var_15 = (signed char)78;
signed char var_16 = (signed char)3;
unsigned short var_17 = (unsigned short)13915;
int zero = 0;
signed char var_18 = (signed char)-110;
short var_19 = (short)-8946;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
