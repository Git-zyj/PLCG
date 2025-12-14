#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)182;
unsigned int var_4 = 1443408993U;
unsigned char var_5 = (unsigned char)32;
signed char var_6 = (signed char)101;
unsigned char var_9 = (unsigned char)50;
unsigned char var_10 = (unsigned char)145;
unsigned char var_15 = (unsigned char)187;
unsigned long long int var_18 = 11743848930367500761ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)58842;
unsigned char var_21 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
