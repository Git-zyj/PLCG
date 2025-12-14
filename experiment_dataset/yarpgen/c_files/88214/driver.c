#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5456657228826313267ULL;
short var_3 = (short)-6052;
signed char var_9 = (signed char)-9;
unsigned short var_10 = (unsigned short)9189;
int zero = 0;
unsigned char var_14 = (unsigned char)68;
unsigned int var_15 = 2169071869U;
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
