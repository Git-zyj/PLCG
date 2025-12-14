#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-90;
long long int var_9 = 5136518547584270777LL;
unsigned int var_11 = 2314877835U;
int zero = 0;
unsigned short var_15 = (unsigned short)52750;
unsigned short var_16 = (unsigned short)49159;
unsigned long long int var_17 = 1245278388303445384ULL;
unsigned char var_18 = (unsigned char)162;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
