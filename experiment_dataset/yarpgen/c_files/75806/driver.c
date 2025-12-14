#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11653020918388401617ULL;
unsigned long long int var_3 = 3876056725710586870ULL;
short var_7 = (short)24601;
long long int var_9 = -3408089329133483133LL;
int var_16 = 1618515320;
int zero = 0;
unsigned long long int var_18 = 14728544429309974873ULL;
signed char var_19 = (signed char)-29;
signed char var_20 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
