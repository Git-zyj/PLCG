#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)253;
signed char var_2 = (signed char)84;
unsigned long long int var_3 = 17068298091561424763ULL;
unsigned char var_4 = (unsigned char)186;
unsigned char var_5 = (unsigned char)212;
long long int var_7 = -7781632729918512502LL;
int zero = 0;
unsigned short var_10 = (unsigned short)52250;
unsigned char var_11 = (unsigned char)111;
unsigned short var_12 = (unsigned short)59547;
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
