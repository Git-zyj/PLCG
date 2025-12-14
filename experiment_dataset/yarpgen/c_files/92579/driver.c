#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31646;
unsigned char var_2 = (unsigned char)204;
signed char var_3 = (signed char)-35;
unsigned char var_6 = (unsigned char)82;
unsigned char var_7 = (unsigned char)157;
unsigned char var_8 = (unsigned char)143;
unsigned long long int var_9 = 14666388097180668006ULL;
unsigned char var_11 = (unsigned char)94;
unsigned char var_13 = (unsigned char)11;
long long int var_15 = 9152155422303538085LL;
int zero = 0;
unsigned int var_16 = 3835359092U;
unsigned char var_17 = (unsigned char)88;
unsigned char var_18 = (unsigned char)191;
void init() {
}

void checksum() {
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
