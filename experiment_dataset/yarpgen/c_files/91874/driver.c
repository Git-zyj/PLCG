#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27916;
unsigned short var_6 = (unsigned short)14738;
long long int var_9 = -5715220836735934065LL;
short var_10 = (short)17636;
signed char var_11 = (signed char)22;
int zero = 0;
short var_14 = (short)-19042;
unsigned int var_15 = 4183645051U;
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
