#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
unsigned short var_1 = (unsigned short)1864;
short var_2 = (short)20223;
int var_3 = -2087325010;
long long int var_4 = -1511792103560474820LL;
unsigned int var_6 = 876846581U;
unsigned char var_8 = (unsigned char)130;
unsigned int var_9 = 150512963U;
int zero = 0;
unsigned long long int var_10 = 4985136098030883628ULL;
unsigned int var_11 = 2556635985U;
long long int var_12 = -1133531954161027179LL;
int var_13 = 83716590;
long long int var_14 = -761032179513855726LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
