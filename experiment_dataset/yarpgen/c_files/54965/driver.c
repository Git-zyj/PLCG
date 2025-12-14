#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20674;
unsigned short var_2 = (unsigned short)46824;
unsigned long long int var_3 = 6094127931795224738ULL;
signed char var_4 = (signed char)-24;
int var_7 = 1633672032;
unsigned char var_8 = (unsigned char)204;
int var_9 = 210579786;
unsigned char var_10 = (unsigned char)96;
unsigned char var_12 = (unsigned char)224;
int zero = 0;
unsigned long long int var_13 = 929930041831422105ULL;
unsigned char var_14 = (unsigned char)35;
void init() {
}

void checksum() {
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
