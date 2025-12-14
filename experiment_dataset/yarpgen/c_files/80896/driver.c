#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2502;
unsigned long long int var_3 = 8975630493330639244ULL;
unsigned int var_4 = 3425566829U;
unsigned short var_7 = (unsigned short)5746;
short var_10 = (short)-27246;
int var_12 = 2043482276;
int zero = 0;
short var_13 = (short)-21094;
int var_14 = 124845679;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
