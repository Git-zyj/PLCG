#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)71;
unsigned short var_5 = (unsigned short)55675;
int var_8 = 1279402508;
short var_15 = (short)31194;
unsigned long long int var_18 = 441836169938497659ULL;
int zero = 0;
int var_19 = 566303889;
unsigned char var_20 = (unsigned char)68;
unsigned int var_21 = 4057346106U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
