#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1904813549887633761ULL;
signed char var_2 = (signed char)-28;
unsigned short var_6 = (unsigned short)65166;
signed char var_7 = (signed char)83;
unsigned char var_9 = (unsigned char)185;
int zero = 0;
long long int var_11 = 6509854559928065217LL;
short var_12 = (short)5289;
unsigned char var_13 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
