#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5346167350631786344LL;
signed char var_1 = (signed char)112;
unsigned short var_2 = (unsigned short)35550;
int var_3 = 1658827423;
unsigned char var_5 = (unsigned char)172;
long long int var_7 = 8592339947038815980LL;
int var_9 = 818335345;
int zero = 0;
unsigned char var_11 = (unsigned char)224;
unsigned short var_12 = (unsigned short)49247;
unsigned char var_13 = (unsigned char)209;
long long int var_14 = -558138718138672556LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
