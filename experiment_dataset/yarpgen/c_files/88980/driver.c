#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)109;
unsigned char var_1 = (unsigned char)113;
unsigned short var_2 = (unsigned short)55416;
_Bool var_3 = (_Bool)0;
unsigned long long int var_7 = 2278256821596014769ULL;
signed char var_8 = (signed char)51;
int zero = 0;
unsigned char var_11 = (unsigned char)119;
unsigned int var_12 = 2840828762U;
unsigned char var_13 = (unsigned char)230;
signed char var_14 = (signed char)-107;
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
