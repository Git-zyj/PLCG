#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6310616336215257930ULL;
unsigned char var_2 = (unsigned char)140;
unsigned char var_3 = (unsigned char)46;
signed char var_5 = (signed char)105;
unsigned long long int var_6 = 9594981539237816297ULL;
unsigned char var_7 = (unsigned char)73;
int zero = 0;
long long int var_10 = -9213239323347338190LL;
short var_11 = (short)9789;
long long int var_12 = 8600519209647720784LL;
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
