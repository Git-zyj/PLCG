#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 39602906;
int var_2 = -187688863;
int var_3 = 1903550007;
unsigned char var_5 = (unsigned char)161;
unsigned long long int var_6 = 11975164083523948983ULL;
int var_7 = 1301129716;
unsigned long long int var_8 = 15695479590048536667ULL;
signed char var_12 = (signed char)-24;
int zero = 0;
int var_13 = -209618442;
unsigned long long int var_14 = 8843066175544375450ULL;
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
