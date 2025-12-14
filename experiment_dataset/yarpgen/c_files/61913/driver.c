#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-55;
unsigned char var_4 = (unsigned char)109;
unsigned short var_6 = (unsigned short)12946;
short var_9 = (short)22416;
int zero = 0;
unsigned long long int var_12 = 3453990461590341042ULL;
unsigned long long int var_13 = 2407329903917217316ULL;
signed char var_14 = (signed char)-14;
unsigned int var_15 = 2365472406U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
