#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1064521807066280845LL;
unsigned long long int var_1 = 9625574271470779186ULL;
unsigned long long int var_2 = 2487405410603127203ULL;
long long int var_4 = -1429864683330677095LL;
unsigned char var_8 = (unsigned char)6;
long long int var_11 = 8558453169016092839LL;
long long int var_14 = -5140206377189483233LL;
int zero = 0;
unsigned short var_16 = (unsigned short)52102;
unsigned short var_17 = (unsigned short)48992;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
