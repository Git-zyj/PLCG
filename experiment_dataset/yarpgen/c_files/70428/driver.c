#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)67;
signed char var_4 = (signed char)-37;
unsigned char var_5 = (unsigned char)148;
unsigned short var_6 = (unsigned short)65038;
unsigned short var_8 = (unsigned short)49129;
int zero = 0;
unsigned long long int var_10 = 4449067328828291292ULL;
signed char var_11 = (signed char)-98;
unsigned short var_12 = (unsigned short)31177;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
