#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)73;
signed char var_5 = (signed char)-58;
int zero = 0;
unsigned short var_10 = (unsigned short)34427;
signed char var_11 = (signed char)111;
signed char var_12 = (signed char)65;
unsigned short var_13 = (unsigned short)5473;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
