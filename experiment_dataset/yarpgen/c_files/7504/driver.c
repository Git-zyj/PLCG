#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)182;
short var_9 = (short)17150;
unsigned char var_10 = (unsigned char)23;
signed char var_13 = (signed char)-23;
unsigned char var_14 = (unsigned char)109;
unsigned char var_16 = (unsigned char)251;
int zero = 0;
unsigned long long int var_19 = 5246460885587190857ULL;
unsigned char var_20 = (unsigned char)158;
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
