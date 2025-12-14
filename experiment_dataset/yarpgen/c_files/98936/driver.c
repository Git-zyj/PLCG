#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17782482717459202839ULL;
unsigned long long int var_5 = 11985634003215257630ULL;
int var_6 = 1460486810;
unsigned char var_8 = (unsigned char)237;
unsigned int var_9 = 2582529163U;
int var_10 = 623111343;
short var_11 = (short)-1526;
int zero = 0;
signed char var_17 = (signed char)-56;
short var_18 = (short)-8594;
unsigned int var_19 = 1795758098U;
unsigned int var_20 = 3917496204U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
