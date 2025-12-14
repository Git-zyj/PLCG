#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-79;
unsigned char var_4 = (unsigned char)234;
long long int var_5 = 4418646309782293LL;
unsigned char var_6 = (unsigned char)83;
unsigned short var_10 = (unsigned short)17353;
short var_11 = (short)25035;
int zero = 0;
int var_18 = -766264160;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
