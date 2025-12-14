#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27736;
unsigned int var_1 = 1036320287U;
int var_5 = -92765044;
signed char var_6 = (signed char)113;
short var_9 = (short)2340;
short var_10 = (short)-11564;
unsigned short var_12 = (unsigned short)15034;
unsigned short var_16 = (unsigned short)5472;
unsigned short var_18 = (unsigned short)25872;
int zero = 0;
unsigned long long int var_19 = 5817629942718245431ULL;
signed char var_20 = (signed char)-85;
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
