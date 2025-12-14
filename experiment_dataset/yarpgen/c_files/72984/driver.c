#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)34;
unsigned long long int var_4 = 3910720135117705297ULL;
unsigned long long int var_6 = 17007647573759162415ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 6923024838458847545ULL;
int zero = 0;
unsigned long long int var_15 = 16414544576889191008ULL;
unsigned short var_16 = (unsigned short)22011;
unsigned short var_17 = (unsigned short)39612;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
