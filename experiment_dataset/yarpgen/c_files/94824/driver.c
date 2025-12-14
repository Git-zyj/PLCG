#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3393135880U;
signed char var_4 = (signed char)-103;
unsigned char var_5 = (unsigned char)131;
unsigned int var_6 = 3554663954U;
unsigned short var_7 = (unsigned short)16445;
unsigned int var_8 = 1174788276U;
unsigned short var_13 = (unsigned short)7141;
int zero = 0;
unsigned short var_17 = (unsigned short)50420;
signed char var_18 = (signed char)42;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
