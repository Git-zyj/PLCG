#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
unsigned short var_2 = (unsigned short)37561;
signed char var_3 = (signed char)-79;
unsigned long long int var_6 = 8100116481129875418ULL;
unsigned char var_7 = (unsigned char)232;
unsigned char var_8 = (unsigned char)129;
unsigned char var_9 = (unsigned char)130;
int zero = 0;
unsigned char var_10 = (unsigned char)61;
unsigned short var_11 = (unsigned short)58481;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
