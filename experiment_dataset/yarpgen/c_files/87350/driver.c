#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)251;
unsigned char var_6 = (unsigned char)232;
signed char var_8 = (signed char)-71;
signed char var_9 = (signed char)47;
unsigned char var_11 = (unsigned char)232;
int var_13 = -110600132;
int zero = 0;
short var_18 = (short)1390;
unsigned long long int var_19 = 2007224723686214639ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
