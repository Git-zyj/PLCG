#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3985953771U;
unsigned short var_2 = (unsigned short)618;
long long int var_3 = 3713917778198591070LL;
signed char var_4 = (signed char)118;
unsigned short var_5 = (unsigned short)49761;
unsigned char var_6 = (unsigned char)132;
unsigned long long int var_9 = 15046278777805477954ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)-19050;
unsigned long long int var_12 = 11370224292863811927ULL;
unsigned char var_13 = (unsigned char)35;
short var_14 = (short)-24694;
signed char var_15 = (signed char)-112;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
