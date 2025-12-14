#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2428126515U;
short var_2 = (short)-27166;
unsigned long long int var_7 = 1151351033187057570ULL;
unsigned short var_8 = (unsigned short)20492;
short var_9 = (short)-31604;
int var_11 = 359269330;
unsigned int var_14 = 1586194028U;
int zero = 0;
unsigned long long int var_15 = 9968622421148725916ULL;
unsigned long long int var_16 = 9198084724357689817ULL;
void init() {
}

void checksum() {
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
