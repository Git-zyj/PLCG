#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)226;
unsigned char var_7 = (unsigned char)158;
unsigned char var_10 = (unsigned char)8;
unsigned long long int var_11 = 10389062822176627603ULL;
unsigned long long int var_13 = 7925148679724697126ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)114;
signed char var_21 = (signed char)-120;
long long int var_22 = -1742404393732308997LL;
signed char var_23 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
