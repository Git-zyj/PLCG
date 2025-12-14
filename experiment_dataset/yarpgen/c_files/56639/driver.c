#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 182485056U;
short var_4 = (short)1032;
unsigned int var_5 = 1406267697U;
unsigned long long int var_6 = 6091829900819535001ULL;
unsigned char var_11 = (unsigned char)90;
int zero = 0;
short var_16 = (short)4244;
short var_17 = (short)-16299;
long long int var_18 = -5995732929895810327LL;
void init() {
}

void checksum() {
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
