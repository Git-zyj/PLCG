#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)19045;
unsigned long long int var_6 = 12925555996310560147ULL;
unsigned long long int var_7 = 16761777068801474837ULL;
unsigned short var_8 = (unsigned short)13652;
unsigned long long int var_12 = 9871503319117819756ULL;
unsigned char var_14 = (unsigned char)135;
int zero = 0;
signed char var_15 = (signed char)-115;
int var_16 = 96239382;
long long int var_17 = -5863694866149574478LL;
signed char var_18 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
