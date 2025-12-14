#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1135;
unsigned char var_2 = (unsigned char)216;
unsigned char var_3 = (unsigned char)75;
long long int var_5 = -7170627661263226154LL;
unsigned int var_6 = 2500516567U;
unsigned int var_7 = 3997279594U;
unsigned long long int var_10 = 16974100967629368659ULL;
unsigned long long int var_11 = 7381576162940903454ULL;
int zero = 0;
signed char var_13 = (signed char)113;
short var_14 = (short)-6798;
signed char var_15 = (signed char)-27;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
