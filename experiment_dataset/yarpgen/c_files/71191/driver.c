#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)86;
long long int var_4 = 3667428623705015049LL;
int var_9 = 1021730844;
unsigned int var_10 = 4093907096U;
short var_12 = (short)18874;
int zero = 0;
short var_17 = (short)-27610;
unsigned short var_18 = (unsigned short)36657;
int var_19 = 1509839959;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
