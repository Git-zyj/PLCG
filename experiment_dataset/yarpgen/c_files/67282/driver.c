#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
signed char var_2 = (signed char)-28;
unsigned int var_7 = 1914962993U;
long long int var_8 = 8984028435565208901LL;
unsigned char var_9 = (unsigned char)223;
unsigned short var_15 = (unsigned short)55085;
unsigned long long int var_17 = 2291107919524241232ULL;
unsigned long long int var_19 = 1748219726935787326ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)25339;
unsigned int var_21 = 2361009487U;
signed char var_22 = (signed char)49;
unsigned short var_23 = (unsigned short)41970;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
