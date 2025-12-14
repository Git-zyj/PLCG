#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)229;
unsigned long long int var_3 = 5907429824503005021ULL;
unsigned short var_4 = (unsigned short)30391;
unsigned short var_5 = (unsigned short)42459;
unsigned char var_6 = (unsigned char)65;
long long int var_7 = 6797209826768917821LL;
unsigned short var_8 = (unsigned short)54544;
unsigned char var_11 = (unsigned char)77;
signed char var_12 = (signed char)-55;
int zero = 0;
unsigned int var_16 = 345556374U;
unsigned short var_17 = (unsigned short)6229;
unsigned short var_18 = (unsigned short)54340;
long long int var_19 = -7376443442711538339LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
